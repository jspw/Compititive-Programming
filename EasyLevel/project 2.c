#include<stdio.h>
int main ()
{
    int i,n,a,sum;
    scanf("%d",&n);
    sum=0;
    for (i=1;i<=n;i++) {
        scanf("%d" ,&a);
        sum=sum+a;
    }
    printf("SUM = %d",sum);
    return 0;
}
