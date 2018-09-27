#include<stdio.h>
int main()

{
    int i,n;

    scanf("%d %d", &i, &n);

    int s;

    if (i>n) {

        s = i ;

        i = n ;

        n = s ;

    }

    for (;i<=n;i++)
        {
        if (i%2==0)

            continue;

        printf("%d\n ",i);

    }

    return 0;

}
