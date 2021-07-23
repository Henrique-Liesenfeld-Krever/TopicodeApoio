#include <stdio.h>

struct pessoa{
    float peso;
    float altura;
};
typedef struct pessoa Pessoa; //substitui nas declaracoes "struct pessoa" por "Pessoa"

int main()
{
    Pessoa pessoa1; //declara o dado pessoa1
    pessoa1.peso = 60; //atribui peso a pessoa1
    pessoa1.altura = 1.85; //atribui altura a pessoa1
    
    
    Pessoa pessoa2;
    pessoa2.peso = 40;
    pessoa2.altura = 1.80;
    
    
    ///print
    printf("\nPeso:%f", pessoa1.peso);
    printf("\nAltura: %.2f", pessoa1.altura);
    
    printf("\n\n\nPeso da pessoa 2: %f", pessoa2.peso);
    printf("\n Altura da pessoa 2: %f", pessoa2.altura);
    
    //Note que "Pessoa" é um tipo de dado. Diferentes variaveis do tipo Pessoa sao independentes.
    
    
    
    
    
    
    
    
    //Quem quiser ver exemplo com vetor...
    
    
    //Exemplo com vetor de pessoas. Note que primeiro indicamos a posicao
    //para depois acessar o campo da struct.
    
    /*Pessoa pessoa3[10];
    pessoa3[0].peso = 20;
    pessoa3[0].altura = 1.85;
    
    for(int i = 0; i < 10; i++){
        pessoa3[i].peso = 20 + i*3;
        pessoa3[i].altura = 1.60 + i*0.1;
    }//inicializa todas as 10 pessoas do array, atribuicao de valores so pra serem todos diferentes
    
    for(int i = 0; i < 10; i++){
        printf("\nPeso:%f", pessoa3[i].peso);
        printf("\nAltura: %.2f", pessoa3[i].altura);
    }//printa os atributos de todas as 10 pessoas do array
    */
    
    return 0;
}
