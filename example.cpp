#include<stdio.h>
int main()
{
    char str[100],rev[100];
    gets(str);
    rev = strrev(str);
    if(strcmp(str,rev)==0)
        printf("bal");
    else printf("baal");
    return 0;
}
