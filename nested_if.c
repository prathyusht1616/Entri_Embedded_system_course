#include <stdio.h>

int main() 
{
    int age = 17;
    int ID =1;
    if (age >= 18)
    {
        if(ID==1)
        {
            printf("ELIGIBLE TO VOTE\n");
        }
        else
        {
            printf("ID Required\n");
        }
    }
    else
    { 
        printf("Note eligibe to vote\n");
    }

    return 0;
}