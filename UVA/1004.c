#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,prod;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        prod=a*b;
        printf("PROD = %d\n",prod);
    }
    getch();
    return 0;
}
