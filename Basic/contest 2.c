#include<stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter value of a & b : ");
    while(scanf("%d%d",&a,&b) != EOF)
    {
        sum = a + b;
        printf("%d + %d = %d\n",a ,b ,sum);
        printf("Enter value of a & b : ");
    }
    return 0;
}
