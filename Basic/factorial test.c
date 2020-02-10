#include<stdio.h>

int main()

{
    int i,fact,n;

    while( scanf("%d",&n) != EOF)

    {
        fact = 1;

        for ( i =1 ; i <= n ; i++ )
        {
            fact = fact * i ;


        }

        printf(" Fact %d = %d\n", n, fact) ;

    }
    return 0;
}
