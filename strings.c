#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 9. Leia uma string s1. Crie uma string s2, s3 e s4, onde: s2 tenha todos os caracteres minúsculos de s1; s3 tenha todos os
caracteres maiúsculos de s1 e s4 seja equivalente a string s1 capitalizada (i.e., todas as palavras iniciam com letra maiúscula e
as letras restantes da palavra são minúsculas); */
int main()
{
    char s1[50],s2[50],s3[50],s4[50];
    printf("Digite uma string: ");
    scanf("%[^\n]",s1);                 // faz a leitura até a quebra de linha (enter)

    int its2=0, its3=0, its4=0;         // criação das variaveis iteradoras do codigo

    for (int i = 0; i < strlen(s1); i++)
    {

        if (s1[i] >= 97 && s1[i] <=122)
        {
            s2[its2]=s1[i];                //s2 vai receber as letras minusculas
            its2++;
            s4[its4]=s1[i]-32;              //s4 vai receber as letras maiuscula após terem sido convertidas
            its4++;
        }
        if (s1[i]>=65 && s1[i]<=90)
        {
            s3[its3]=s1[i];             //s3 recebe somente as letras maiusculas
            its3++;
            s4[its4]=s1[i];             //s4 recebe as letras maiusculas sem tratamento pois nao é necessário
            its4++;
        }
        if (s1[i]==' ')
        {
            s4[its4]=' ';           // coloca os espaços em s4
            its4++;
        }
        
    }
    s4[its4]='\0';
    puts(s1);
    puts(s2);           //printa as strings
    puts(s3);
    puts(s4);
}
