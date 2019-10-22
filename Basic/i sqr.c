#include<stdio.h>

int main()

{
        int i,n;
        int sum;
        sum=0;
        printf("Enter a value of n:");

       scanf("%d",&n);
        {
        for (i=1;i<=n;i++)
        {
        sum=sum+i*i;
        }
        printf("sum = %d\n",sum);

        }

    return 0;
}
