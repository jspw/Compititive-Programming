#include<stdio.h>

int main()

{
    int a, b, sum;

    while (1)
    {
        scanf(" %d%d", &a, &b);
        sum = a + b ;
        if ( a==0 && b==0)
        {
            return 0;
        }
        printf("%d + %d = %d\n", a, b, sum) ;
    }

     return 0;
}
