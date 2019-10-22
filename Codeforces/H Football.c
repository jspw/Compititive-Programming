#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char a[101];
    gets(a);
    if(strlen(a)>=7)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6])
                j++;
        }
        if(j>=1)
            printf("YES");
        else printf("NO");
    }
    else printf("NO");
    return 0;
}
