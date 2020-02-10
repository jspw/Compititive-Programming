#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,k;
    char s[1000],t[101],u[101];
    char m[100]="NEWYEARANDCHRISMASMEN";
    gets(s);
    gets(t);
    gets(u);
    l=strlen(m);
    strcat(s,t);
    strcat(s,u);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=0;m[j]!='\0';j++)
        {
            if(s[i]==m[j])
                k++;
        }
    }
    if(k>=l)
        printf("YES");
        else printf("NO");
    return 0;
}



