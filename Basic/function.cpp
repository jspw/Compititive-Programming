#include<stdio.h>
int loop (int n,int i)
{
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;

}
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    sum=loop(n,i);
    printf("%d",sum);
}

