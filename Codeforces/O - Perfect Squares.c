#include<stdio.h>
#include<math.h>
int main()
{
    int j, n,i,a[100],c[100],x;
    float b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=sqrt(a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]-(int)b[i] !=0)
            bal(i);

    }
    for(j=1;c[j]!=0;j++)
        printf("%d",c[j]);


    return 0;
}
void bal (int i)
{
    int a[100],c[100],j=0;
    c[j]=a[i];
    j++;
}
