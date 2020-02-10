#include<stdio.h>

int main()

{
    int a,b,n,i,c;

    while (1)
    {


        printf("How many fibonaci numbers : ");

        scanf("%d",&n);

        printf("Enter first two digits : ");

        scanf("%d%d", &a,&b);

        for (i=1;i<=n;i++)  {

            printf("%d ",a);

            c=a+b;
            a=b;
            b=c;
            printf("\n");
        }
    }
    return 0;
}
