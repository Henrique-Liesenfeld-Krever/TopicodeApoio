#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int idade;
    float peso;
};
typedef struct pessoa Pessoa; //esse typedef eh apenas pra nao ter que escrever "struct pessoa" toda hora
                              //e poder substituir isso por "Pessoa" na declaracao do dado.

int main()
{
    
    //Struct estatica
    Pessoa pessoaEstatico;
    pessoaEstatico.idade = 30;
    pessoaEstatico.peso = 40.3;
    
    printf("\nStruct estatica: %d %.2f",pessoaEstatico.idade, pessoaEstatico.peso);
    
    
    //Note que em structs estaticas.
    //A verdade e que.
    
    
    
    //Aqui vamos declarar um vetor de structs do mesmo jeito que faziamos com um vetor de inteiros
    Pessoa pessoaVetorEstatico[10];
    for (int i = 0; i < 10; i++){
        pessoaVetorEstatico[i].idade = 20 + i; //esses calculos sao apenas para fins de preenchimento
        pessoaVetorEstatico[i].peso = 30 + i;
    }
    
    for (int i = 0; i < 10; i++){
        printf("\nVetor de struct estatico: %d %.2f", pessoaVetorEstatico[i].idade, pessoaVetorEstatico[i].peso);
    }
    
    //Por que esses printfs funciona se o vetor foi alocado estaticamente?
    printf("\n Print pq funciona? %d", pessoaVetorEstatico->idade);
    printf("\n Print pq funciona? %d", (pessoaVetorEstatico+3)->idade);
    
    
    
    
    
    //exemplo com vetor de inteiros
    int a[] = {1,2,3};
    printf("\nPrimeira posicao do vetor: %d", *(a));
    printf("\nSegunda posicao do vetor: %d", *(a+1));
    
    
    
    
}


