#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int n;
    gets(s1);
    gets(s2);
    n=strcmp(s1,s2);
    if (n==0)
    {
        printf(" Equal");
    }
    else printf("Bal");
    return 0;
}
