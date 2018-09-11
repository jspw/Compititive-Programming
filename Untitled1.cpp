#include<stdio.h>

int main()

{
    int check,i,j,a,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    scanf("%d",&a);
    if (a==1)
        {
        printf("0\n");
    }
    else {
    check=1;
    for(i=2;i<a;i++)
    {
        if (a%i==0)
            check=0;
    }

    if (check==1)
    {
        printf("1\n");
    }
    else
        printf("0\n");
    }
    }
    return 0;
}

