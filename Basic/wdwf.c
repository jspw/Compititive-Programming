#include<stdio.h>
main()
{
    int n;
    n=0;
    while (n<=20 ) {
        n++;
        if (n%2==0) {
            continue;
        }
    printf("%d\n",n);
    }
    return 0;

}
