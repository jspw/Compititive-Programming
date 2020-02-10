#include<stdio.h>

int main()

{
    int i,n,fact;

    while ( scanf("%d",&n) != EOF )
    {
        fact=1;
        for (i=1;i<=n;i++)
        {
            fact = fact*i ;
        }
        printf("Fact of %d is : %d\n",n,fact);
    }
    return 0;
}
