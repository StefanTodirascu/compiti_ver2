#include<stdio.h>

int main()
{
    int numeri[10];
    printf("Inserire dieci numeri\n");

    for(int i=0; i<10; i++)
    {
        printf("Inserire elemento %d", i);
        scanf("%d", numeri[i]);
    }
        

    for(int i=0; i<10; i++)
    {
        if(numeri[i]%2==0)
            printf("%d",numeri[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(numeri[i]%2!=0)
            printf("%d",numeri[i]);
    }

return 0;
}