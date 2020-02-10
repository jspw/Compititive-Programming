#include<stdio.h>
main()
{
    int m,n=5;

    int i;
     m=0;
    for ( i = 1; i <= 10; i =i+1) {
        m=m+n;
        printf("%d X %d =%d\n",n,i,m);
        }
    return 0;

    }
