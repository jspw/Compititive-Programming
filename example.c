#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],re[100];
    gets(st);
    re = strrev(st);
    if(strcmp(st,re)==0)
        printf("bal");
    else printf("baal");
    return 0;
}
