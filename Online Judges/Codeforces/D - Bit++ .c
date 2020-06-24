#include<stdio.h>
int main()
{
    int n,i,j=0;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(a);
        if(a[0]=='+' || a[1]=='+')
            j++;
        else if(a[0]=='-' || a[1]=='-')
            j--;
    }
    printf("%d",j);

    return 0;
}
