#include<stdio.h>
#include<string.h>
int main()
{
    char stringa[]="Ciao";
    printf("La stringa è: %s \n",stringa);

    //strlen
    printf("La lunghezza della stringa è: %ld \n",strlen(stringa));

    //strcpy
    char stringa2[strlen(stringa)];    
    strcpy(stringa2,stringa);    
    printf("Coppia della stringa: %s \n",stringa2); 
   
    //strcat
    char stringa3[]=", come va?";    
    strcat(stringa,stringa3);    
    printf("Stringa concatenata: %s \n",stringa); 

    printf("\nReverse String is: %s",strrev(stringa));    


return 0;
}
