#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value:");
    while( scanf("%d%d",&a,&b) != EOF )
    {
        printf("%d\n",a+b);
        printf("enter value:");
    }
}
