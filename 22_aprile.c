#include<stdio.h>

int main()
{
    int num;
    do
    {
        printf("Inserire un numero positivo maggiore di 3\n");
        scanf("%d", &num);
    }while(num<3);

    if(num%3==0)
    {
        printf("\nIl numero è divisibile per 5\n***\n* *\n***\n");
    }
    else if(num%5==0)
    {
        printf("\nIl numero è divisibile per 5\n*****\n*   *\n*   *\n*   *\n*****\n");
    }
    else
    {
        printf("\nIl numero non è divisibile nè per 3 nè per 5");
    }
        
    return 0;

}