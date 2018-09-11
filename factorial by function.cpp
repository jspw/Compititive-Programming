#include<stdio.h>
double fact(double n)
{
    if(n==1) return 1;
    else return n*fact(n-1);
}

int main()
{
    double n,a;
    scanf("%lf",&n);
    a=fact(n);
    printf("%.1lf",a);
    return 0;

}
