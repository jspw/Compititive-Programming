#include<stdio.h>

int main()

{
    int i,sum, num[20] ;
    sum=0;
    for (i=1;i<=6;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d",sum);
    return 0;
}
