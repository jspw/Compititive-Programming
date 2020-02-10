#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,m,i,a[1005],b[1005],j=0,k,sum=0,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
    }

    for (i=0; i<j-1; i++)
    {
        for (k=0; k<j-i; k++)
        {
            if (b[k]>b[k+1])
            {
                temp = b[k];
                b[k]=b[k+1];
                b[k+1]=temp;
            }
        }

    }
    for(i=0;i<m;i++)
    {
        sum=sum+b[i];
    }
    printf("%d",abs(sum));
    return 0;
}
