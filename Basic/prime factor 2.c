#include<stdio.h>

int main()

{
        int i,j;
        printf("Enter a value of i:");
        scanf("%d",&i);
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0 && j%2==0)
            {
                printf("%d ",j);
            }
        }


    return 0;
}

