#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        if(a[i]>=37 && a[i]%5==3)
            printf("%d\n",a[i]+2);
        else if(a[i]>=37 && a[i]%5==4)
            printf("%d\n",a[i]+1);
            else printf("%d\n",a[i]);

    }
    return 0;

}
