#include<stdio.h>
int main()
{
    char s1[100];
    int i=0;
    gets(s1);
    while(s1[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}


