#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k=0;
    char m[100]="HQ9";
    char a[101];
    gets(a);
    for(i=0;m[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(m[i]==a[j])
                k++;
        }
    }
    if(k>0)
        printf("YES");
    else printf("NO");
    return 0;
}
