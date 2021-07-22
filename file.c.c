#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    FILE *file2 = fopen("arquivo2", "w+"); //abre file2 em modo escrita e leitura
    fprintf(file2, "Batata"); //escreve em f2 e atualiza o ponteiro para o fim da escrita
    char a2[255];
    fseek(file2, 0,SEEK_SET); //atualiza o ponteiro para o comeco
    fscanf(file2,"%s",a2); //le o conteudo de a2 e atualiza o ponteiro para o fim da escrita
    fseek(file2, 0,SEEK_SET); //atualiza o conteudo do ponteiro para a posicao inicial
    printf("%s",a2); //printa o vetor de caracteres
    fclose(file2); //fecha o arquivo
    
    
    
    
    
    
    //////////////
    //////////////
    /////////////
    
    
    
    
    
    FILE *file = fopen("arquivo1", "w+"); //abre em modo escrita e leitura
    fseek(file,3,SEEK_SET); //atualiza o ponteiro p posição 3
    char a1[255]; //inicializa o vetor de caracteres
    fwrite("abcdefghijklmn", 14, sizeof(char), file); //escreve 14 chars em file e atualiza o ponteiro para a posicao 15+3
    fseek(file,3,SEEK_SET);//atualiza o ponteiro p 3 posicoes a partir do comeco
    fread(a1, 14, sizeof(char), file); //le 14 caracteres a partir da posicao 3 e armazena no vetor a1
    printf("\n%s", a1); //printa a1 como string (string eh vetor de caracteres)
    fclose(file); //fecha o arquivo
    
    
    
    
    
    ////////////
    ////////////
    //////////
    
    
    
    
    
    FILE* fp = fopen("file", "w+"); //abre em modo leitura e escrita
    FILE* fp2 = fopen("file2", "w"); //abre em modo escrita
    int vetor[] = {4,8,5,32,46,1,3};
    fwrite(vetor, 7, sizeof(int), fp); //escreve os 7 inteiros em fp e atualiza o ponteiro
    
    //a partir dessa linha minha memoria ram queimou :((((
    //so tenho 4 bytes pra variaveis
    
    int temp;
    //queremos pegar os numeros maiores que 25 da file1 e colocar na file2
    
    fseek(file,0,SEEK_SET); //coloca o ponteiro de volta p o comeco

    //fread retorna 0 quando nao conseguir ler, ai o loop acaba.
    //queremos dizer "enquanto for possivel ler faca tal coisa"
    while(fread(&temp,1,sizeof(int),fp)){ 
        //aqui vamos percorrer o arquivo 1 a 1 para nao jogar ele inteiro na memoria principal
        //e ver se cada inteiro eh maior que 25 ou nao
        if(temp > 25){
            fwrite(&temp, 1, sizeof(int), fp2); //escreve em file2
        }
    }
    fclose(fp2);
    
    
    //Agora minha memoria voltou e eu posso printar :))
    
    
    
    //vamos abrir em modo leitura o arquivo em que escrevemos antes
    //sim, podemos abrir um arquivo ja existente sem problemas, no caso esse
    //eh o file2 em que armazenamos numeros maiores que 25
    fp2 = fopen("file2", "r"); 
    //nao eh necessario dar fseek pois recem abrimos o arquivo
    int resultado[2];
    fread(resultado, 2, sizeof(int),fp2);//vamos ler 2 inteiros
    printf("\n%d %d", resultado[0],resultado[1]); //printamos
    fclose(fp2); //fechamos o arquivo
    
    
    
    //esse aqui envolve ponteiros mais explicitamente, quem se arrisca?
    /*fp2 = fopen("file2", "r");
    int *resultado = (int*) malloc(2*sizeof(int)); //aloca 2 inteiros de memoria
    while(fread(resultado, 1, sizeof(int),fp2)){
        resultado++; //incrementa o ponteiro
        printf("Li");
    }
    resultado--; //atualiza o ponteiro pra posicao inicial
    resultado--; //de novo pq ele andou 2 bytes
    printf("%d %d", resultado[0],resultado[1]);
    fclose(fp2)*/
    
    
    
}