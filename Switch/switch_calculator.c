#include <stdio.h>

int main() 
{
    char op='/';
    float result;
    float a = 14;
    float b = 3;
    switch(op)
        {
        case '+':
            result = a + b;
            printf("Result = %f\n",result);
            break;
        case '-':
            result = a - b;
            printf("Result = %f\n",result);
            break;
        case '*':
            result = a * b;
            printf("Result = %f\n",result);
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