#include <stdio.h>
int main(){

    printf("TORRE \n");

    for ( int i = 0; i < 5; i++) // Movimento da torre
    {
        printf("Direita \n");
    }

printf("\n");

    printf("BISPO \n");

    for ( int i = 0; i < 5; i++)   // Movimento do bispo
    {
        printf("Cima, direita \n");
    }
    
    printf("\n");


    printf("RAINHA \n");

    for ( int i = 0; i < 8; i++)   // Movimento da rainha
    {
        printf("Esquerda \n");
    }

    printf("\n");

    printf("CAVALO \n");
    int movimentocompleto = 1;

    while (movimentocompleto --)       // Movimento do cavalo
    {
        for (int i = 0; i < 2; i++)
{
    printf("Cima \n");
}
 printf("Direita\n");
    }
    
    printf("\n");
return 0;
}