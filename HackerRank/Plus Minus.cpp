#include<stdio.h>
int main()
{
    int i,n,a[100];
    int j=0,k=0,l=0;
    double p,q,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            j++;
        else if(a[i]>0)
            k++;
        else if(a[i]==0)
            l++;
    }

    p=k/n;
    q=j/n;
    r=l/n;

    printf("%lf\n%lf\n%lf",p,q,r);


    return 0;
}
