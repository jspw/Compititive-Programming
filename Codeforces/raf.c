#include<stdio.h>
#include<string.h>
int main()
{
    int p,q,i,j,k=0;
    char s[1000],t[101],u[101];
    gets(s);
    gets(t);
    gets(u);
    strcat(s,t);
    puts(s);
    p=strlen(s);
    q=strlen(u);
    if(p==q)
            printf("YES");
    else printf("NO");


    return 0;
}




