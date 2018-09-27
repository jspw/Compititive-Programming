#include<stdio.h>
int main()
{
    int x1,x2,x3;

    printf("Enter x1, x2,&x3  : ");

    scanf("%d%d%d",&x1,&x2,&x3);

    if(x1>x2 && x1>x3)

    {
        printf("%d is the larger",x1);

    }

    else if (x2>x1 && x2>x3)
    {
        printf("%d is the  largest",x2);
    }

    else
        printf("%d is the largest",x3);

    return 0;

}
