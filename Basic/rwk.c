#include<stdio.h>
double add(double x, double y);
int main()
{
    double a,b,c;
    a=2.7;
    b=4.6;
    c = add(a,b);
    printf("%lf\n",c);
    return 0;
}

double add(double num1,double num2)
{
    double sum=num1 + num2;
    return sum;
}
