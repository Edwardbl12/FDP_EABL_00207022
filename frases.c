
#include <stdio.h>

#include <string.h>


int main()
{
    char frase [50];
    char palabra [20];
    printf("el limite de palabras es 50\n");
    
    
    printf("Ingresa una frase: ");
     fgets(frase,sizeof(frase),stdin);
     printf("Tu frase es: %s", frase);
    
    printf("\ningrese la palabra que desea buscar:");
    scanf("%s",palabra);
   
   
    if (strstr(frase,palabra)){
        
    printf("\nla palabra que buscaste si se encuentra");
    }
    else printf ("\nla palabra que ingresaste no se encuentra");
    
    
    return 0;
}
