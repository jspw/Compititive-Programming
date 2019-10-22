#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s1[101],s2[101];
    gets(s1);
    gets(s2);
    if(strcmp(strrev(s1),s2)==0)
        printf("YES");
    else printf("NO");
    return 0;
}
