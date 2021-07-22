#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    float matriz[40][40];
    float somaTotal, num;
    // srand(time(NULL));
    /////// essa função é desnecessária para a ideia principal do código
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            matriz[i][j]=rand()%30;                 //aqui se preenche a matriz com numeros aleatórios
        }
        
    }
    /////// essa função é desnecessária para a ideia principal do código
    
    puts("Digite o numero a ser comparado com as sub-matrizes");
    scanf("%f", &num);
    for (int i = 0; i < 39; i++)
    {                                                          //dois for loops são necessarios para alcançar todos os lugares da matriz
        for (int j = 0; j < 39; j++)                            // o tamanho é 1 menor que o tamanho maximo da matriz pois nas operações se faz i+1 e j+1
        {
            somaTotal=matriz[i][j] + matriz[i+1][j] + matriz[i][j+1] + matriz[i+1][j+1];    //soma todos os valores da submatriz em uma variavel
            if (somaTotal==num)                                                                     //faz a comparação da soma com o valor fornecido
            {
                printf("%f é igual a uma submatriz!!!\n%2.f %2.f\n%2.f %2.f\n", num, matriz[i][j], matriz[i+1][j], matriz[i][j+1], matriz[i+1][j+1]);
            }   ////printa que achou e printa a matriz correspondente
        }
        
    }
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            printf("%1.f ",matriz[i][j]);   /* aqui se faz o print da matriz inteira */
        }
        printf("\n");
    }
    
}

