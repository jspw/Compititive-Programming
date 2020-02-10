#include<stdio.h>
int main()
{
    int a[10],end,start,mid,key,n,i;
    start =0;
    do
        {
                while (scanf("%d",&n)!=EOF)
                {

        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
            scanf("%d",&key);
                end =n-1;


                mid=(start+end)/2;
                printf("start:%d\tend:%d\tmid:%d\tkey:%d\ta[mid]:\n",start,end,mid,key,a[mid]);
                if(a[mid]==key)
                {
                    printf("Found at : %d",mid+1);
                    break;
                }
                else if(a[mid]<key)
                {
                    start=mid+1;
                }

                else
                {
                    end=mid-1;
                }
            }
    }

    while(start<=end);

    if(start>end)

    printf("Failed");

    return 0;
}
