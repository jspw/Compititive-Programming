#include<stdio.h>
int main()
{
    int i,j;
    char s[1000000],w[1000000];
    gets(s);
    gets(w);
    for(i=0,j=0;s[i]!='\0',w[j]!='\0';i++,j++)
    {
        if(s[i]==w[j])
        {
            printf("0");
        }
        else printf("1");
    }

    return 0;
}
