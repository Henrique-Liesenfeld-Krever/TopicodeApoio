#include<stdio.h>

void recursiva(int num)
{
    if (num==0)
    {
        return;
    }
    
    recursiva(num-1);
    
    printf("%d ",num);

}

int main()
{
    recursiva(5);
}