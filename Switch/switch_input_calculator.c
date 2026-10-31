#include <stdio.h>

int main() 
{
    char op;
    printf("enther the operator: \n");
    scanf("%c",&op);
    float a,b,result;
    printf("enter the number a =\n");
    scanf("%f",&a);
    printf("enter the number b =\n");
    scanf("%f",&b);
    switch(op)
        {
        case '+':
            result = a + b;
            printf("Result = %.2f\n",result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2f\n",result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2f\n",result);
            break;
         case '/':
             if(b>0)
             {
            result = a / b;
            printf("Result = %.2f\n",result);
             }
            else
             {
                 printf("Division with zero is invalid");
             }
            break;
  
        default:
            printf("invalid operator");
            break;
        }
    return 0;
}