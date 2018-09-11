#include<stdio.h>
int main()
{
    int a[100],sum,i,n;
    while(scanf("%d",&n) != EOF)
    {
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
        printf("Sum is : %d\n",sum);
    }

    return 0;

}
