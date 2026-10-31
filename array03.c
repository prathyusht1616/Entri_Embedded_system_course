#include <stdio.h>
 int main()
 {
    int temp[5] = {100, 98, 88, 78, 97}; 
    
    for (int i=0; i<5; i++)
    {
        scanf("%d\n",&temp[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("Temperature %d Address: %p\n", i, &temp[i]);

    }

    return 0;
    
 }