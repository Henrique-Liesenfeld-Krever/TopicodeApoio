#include<stdio.h>

void recursiva(int num)
{
    if (num==0)
    {
        return;
    }
    
    recursiva(num-1);               // aqui o print vai manda 1 2 3 4 5
    printf("%d ",num);
    //recursiva(num-1);             // se a chamada da função recursiva estiver aqui o printf manda 5 4 3 2 1
}

int main()
{
    recursiva(5);
}
