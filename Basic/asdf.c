#include<stdio.h>
int main()
{
    int a, b, sum;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        sum = a + b;
        printf("%d + %d = %d\n",a ,b ,sum);
    }
    return 0;
}
