#include<stdio.h>
main()
{
    int m,n,i;
    m=0;
    n=5;

    for(i=1;i<=20;i=i+1) {
        m=m+n;
        printf("%d X %d = %d\n",n,i,m);
    }
    return 0;

}
