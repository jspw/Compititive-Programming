#include<stdio.h>
#include<math.h>
#include<inttypes.h>
uint64_t x(uint64_t n)
{
    uint64_t i,sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*2;
    }
    return sum;
}
int main()
{
    uint64_t n,m,mod,b;
    scanf("%"PRId64"%"PRId64"",&n,&m);
    b=x(n);
    mod=m%b;
    printf("%"PRId64"",mod);
    return 0;

}
