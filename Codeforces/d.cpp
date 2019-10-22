#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,h,area;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        h=sqrt((a+b-c+d)*(-a+b+c+d)*(a-b-c+d)*(a+b-c-d)/(4*(a-c)*(a-c)));
        area = (a+c)*h/2;
        printf("Case %d: %.7lf\n",i,area);
    }
    return 0;

}
