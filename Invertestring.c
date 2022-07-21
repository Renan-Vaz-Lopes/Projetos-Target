//Questão 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "ab"; //local da palavra
    int j;
    char ajud;

    if(strlen(s)==1)
    {
        printf("%s",s);
        return 1;
    }

    for(int i=0;i<strlen(s)/2;i++)
    {
        j = strlen(s)-(i+1);
        if(s[i]!=s[j])
        {
            ajud=s[i];
            s[i]=s[j];
            s[j]=ajud;
        }
    }
    printf("%s",s);
    return 2;
}
