#include<stdio.h>
double  add (double a, double b)
{
    double c;
    c=a+b;
    return c;
}
double  sub (double a, double b )
{
    double d;
    d=a-b;
    return d;
}
double  mul (double a, double b)
{
    double e;
    e=a*b;
    return e;
}

double  div (double a, double b)
{
    double f;
    f=a/b;
    return f;
}



int main()
{
    double a,b,c,d,e,f;
    a=4.71;
    b=3.39;

    c=add(a,b);
    printf("%.1f\n",c);

    d=sub(a,b);
    printf("%.1f\n",d);

    e=mul(a,b);
    printf("%.1f\n",e);

    f=div(a,b);
    printf("%.1f\n",f);
    return 0;
}

