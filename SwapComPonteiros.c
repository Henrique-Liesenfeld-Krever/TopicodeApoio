#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;		//lembrar que quando a variavel é um ponteiro e tem o * na frente dela tu ta falando sobre o valor que carrega
    *y = temp;		// se for um ponteiro e NÃO tiver um * na frente tu ta falando sobre o endereço de memoria que o ponteiro ta carregando
}			

int main(){
    int a, b;
    a=10;
    b=15;
    printf("\ta:%d\tb:%d\n", a, b);		//printf antes de trocar
    swap(&a, &b);				//o que acontece é que essa função leva o endereço da memoria da variavel e modifica logo o endereço e ai a modificação permanece fora da função
    printf("\ta:%d\tb:%d\n", a, b);		//print depois de trocar
}
