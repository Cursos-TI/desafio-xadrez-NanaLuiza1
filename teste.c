#include <stdio.h>

void moverBISPO(int casas){
 
    if (casas > 0)
    {
        printf("Cima, direita \n"); //Criando o movimento do bispo
        moverBISPO (casas - 1);
    }
}

void moverrainha(int casas){
 
    if (casas > 0)
    {
        printf("Esquerda \n");  //Criando o movimento da rainha
        moverBISPO (casas - 1);
    }
}

void movertorre(int casas){
 
    if (casas > 0)
    {
        printf("Direita \n");   //Crinado o movimento da torre
        moverBISPO (casas - 1);
    }
}

int main(){
printf("BISPO\n"); //Movimento do bispo
moverBISPO (5);

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

    printf("RAINHA\n"); //Movimento da rainha
    moverrainha (8);

    printf("\n");

    printf("TORRE\n"); //Movimento da torre
    movertorre (8);

    return 0;
}