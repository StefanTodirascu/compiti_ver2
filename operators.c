#include<stdio.h>

int main()
{
    int num;
    printf("Inserire un voto \n");


    scanf("%d", &num);
    (num>=0) ? printf("Voto Positivo \n") : printf("Voto Negativo \n");
    return 0;

}