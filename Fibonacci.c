//Questão 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=143; //x= numero que pertence ou nao a sequencia Fibonacci
    int n1=1;
    int n2=2;
    int r=0;

    if(x==n1)
    {
        printf("pertence a sequencia Fibonacci");
        return 0;
    }

    if(x==n2)
    {
        printf("pertence a sequencia Fibonacci");
        return 1;
    }

    while(1)
    {
        r = n1+n2;
        n1=n2;
        n2=r;
        if(r==x)
        {
            printf("pertence a sequencia Fibonacci");
            break;
        }
        if(r>x)
        {
            printf("nao pertence a sequencia Fibonacci");
            break;
        }
    }
}
