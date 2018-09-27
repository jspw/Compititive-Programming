#include<stdio.h>
main()
{
    int i,n,s;
    printf("Enter a value of n:");
    scanf("%d",&n);
    for (i=1,s=0;i<=n;i++) {
        s=s+i;
    }
    printf("Summation is :%d",s);
    return 0;
}
