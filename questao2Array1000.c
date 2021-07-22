/******************************************************************************

le um array de 1000 numeros inteiros e chama uma funcao para imprimir esses
valores na tela com as seguintes regras:
a. o proprio numero, se ele for o primeiro
b. a soma dos numeros impares anteriores a ele se ele for impar
c. a soma dos numeros pares anteriores a ele se ele for par.
*******************************************************************************/
#include <stdio.h>
#define TAM 5

int numerosAteMil[TAM];                                          
int ImprimeNum_ou_Soma (int numerosAteMil[TAM]);                
                                                            
int main()                           
{
    printf("Digite 5 numeros inteiros: ");
    for (int i = 0; i <TAM; i++)
    {
        scanf("%d", &numerosAteMil[i]);
    }
    ImprimeNum_ou_Soma(numerosAteMil);
    return 0;
}

int ImprimeNum_ou_Soma (int numerosAteMil[TAM])
{
    int i, j;
    // printf("%d", numerosAteMil[0]);            seria possivel apenas printar o primeiro indice aqui fora do for, se colocassemos i = 1;
    for (i = 0; i <TAM; i++) 
    {
        int soma = 0;
        if (numerosAteMil[i] == numerosAteMil[0])
        {
            printf("%d", numerosAteMil[0]);
        }
        else
        {
            if (numerosAteMil[i] % 2 == 0)
            {
                for(j = 0; j < i; j++)   
                {
                    if (numerosAteMil[j] % 2 == 0)
                    {
                       soma = soma + numerosAteMil[j];
                    }
                }
                
            }
            else
            {
                for(j = 0; j < i; j++)
                {
                    if (numerosAteMil[j] % 2 == 1)
                    {
                       soma = soma + numerosAteMil[j];
                    }
                }
                
            }
            printf(" %d", soma);  
        }
            
        } 
}


 //1 2 3 4 5 6 7 8 9
 //1 0 1 2 4 6 9 12 16 



