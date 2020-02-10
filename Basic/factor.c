#include<stdio.h>

int main()

{
        int i,j;
        printf("Enter a value of i:");
        while(scanf("%d",&i) != EOF )
        {
        for (j=2;j<=i/2;)
        {
            if (i%j==0)
            {
                printf("%d  ",j);
                i/=j;

            }
            else{
                j++;
            }

        }
        printf("\nEnter a value of i:");
        }


    return 0;
}

