#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a[100];
    double p,up=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        up= up+ a[i]/100.0;
    }
    p=up/n * 100;
    printf("%lf",p);
    return 0;

}
