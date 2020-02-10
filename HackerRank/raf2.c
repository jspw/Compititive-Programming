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
    for(i=0;u[i]!='\0';i++)
        {
            for(j=0;s[j]!='\0';j++)
            {
                if(u[i]==s[j])
                    k++;
            }
        }
        printf("%d %d",k,p);
    if(p==q && p==k)
            printf("YES");
    else printf("NO");


    return 0;
}




