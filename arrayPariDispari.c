#include<stdio.h>

int main()
{
    int numeri[10];
    printf("Inserire dieci numeri\n");

    for(int i=0; i<10; i++)
    {
        printf("Inserire elemento %d \n", i+1);
        scanf("%d", &numeri[i]);
    }
        
    printf("Ecco i numeri pari: ");
    for(int i=0; i<10; i++)
    {
        if(numeri[i]%2==0)
            printf("%d ",numeri[i]);
    }

    printf("\n");
    printf("Ecco i numeri dispari: ");
    for(int i=0; i<10; i++)
    {
        if(numeri[i]%2!=0)
            printf("%d ",numeri[i]);
    }

return 0;
}
