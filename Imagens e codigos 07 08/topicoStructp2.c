
#include <stdio.h>
#include <stdlib.h>
struct pessoa{
    int idade;
    float peso;
};
typedef struct pessoa Pessoa;

void atualiza_ponteiro(Pessoa **p, Pessoa *a){
    *p = a;
}

void atualiza_ponteiro_errado(Pessoa *p, Pessoa *a){
    p = a;
}

int main(){
    
    
    Pessoa *pessoa = (Pessoa*) malloc(sizeof(Pessoa));
    pessoa->idade = 10;
    pessoa->peso = 35.6;
    printf("\nStruct dinamica: %d %.2f", pessoa->idade, pessoa->peso);
    
    

    Pessoa *pessoaVetorDinamico = (Pessoa*) malloc(15*sizeof(Pessoa));
        for (int i = 0; i < 10; i++){
            pessoaVetorDinamico[i].idade = 10 + i; //esses calculos sao apenas para fins de preenchimento
            (pessoaVetorDinamico+i)->peso = 50 + i;
        }
    
    
    for (int i = 0; i < 10; i++){
        printf("\nVetor dinamico primeiro modo: %d",(pessoaVetorDinamico+i)->idade); //note que somar i não derreferencia. Necessario usar a seta.
        printf("\nVetor dinamico segundo modo: %d", ((*(pessoaVetorDinamico+i)).idade));//ou eu posso usar o operador de derreferenciacao e usar o ponto.
        printf("\n Vetor dinamico terceiro modo: %f", pessoaVetorDinamico[i].peso); //passar uma posicao do vetor derreferencia.
    }
    


    
    
    //Utilidade do ponteiro de ponteiro: exemplo
    Pessoa *a = (Pessoa*) malloc(sizeof(Pessoa));
    a->idade = 60;
    a->peso = 80;
    
    
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa)); //vamos usar um vetor exemplo
    p->idade = 30;
    p->peso = 40;
    
    atualiza_ponteiro_errado(p,a); //Queremos que p receba o endereco de a
    printf("\nPonteiro nao atualizado: %d", p->idade);
    //Note que p nao foi atualizado. Isso porque nao passamos o endereco do ponteiro.
    //Se quisessemos alterar o conteudo do endereco que p aponta, essa abordagem funcionaria.
    //Mas nosso objetivo aqui eh alterar o endereco que p aponta.
    
    atualiza_ponteiro(&p,a);
    printf("\nPonteiro atualizado: %d", p->idade);
    //Note que o endereco mudou, isso porque passamos o endereco do ponteiro.
    
    
    
    
    
    
    
    //Alocacao dinamica de matrizes com struct
    
    Pessoa **pessoaMatrizDinamica = (Pessoa**) malloc(10*sizeof(Pessoa*));
    for(int i = 0; i < 10; i++){
        pessoaMatrizDinamica[i] = (Pessoa*) malloc(5*sizeof(Pessoa));
    }
    
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            pessoaMatrizDinamica[i][j].idade = 10+i+j; //apenas para fins de preenchimetno da matriz 
        }
    }
    
    
    printf("\n"); //pra matriz nao sair zoada
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", pessoaMatrizDinamica[i][j].idade); //printamos a matriz
        }
        printf("\n");
    }
    
    
}


