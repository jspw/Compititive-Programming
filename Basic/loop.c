#include<stdio.h>

int main()

{
        int i,n;
        double sum;
        sum=0;
        printf("Enter a value of n:");

       while( scanf("%d",&n) != EOF)
        {
        for (i=1;i<=n;i++)
        {
        sum=sum+i;
        }
        printf("sum = %d\n",sum);

        printf("Enter a value of n:\n");
        }

    return 0;
}
