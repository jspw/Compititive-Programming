#include<stdio.h>
int main()
{
    int a[20]={11,22,30,33,42,44,55,60,80,88,99},start,mid,key,end;
    start=0;
    end=10;
    printf("Enter key :");
    scanf("%d",key);
    do
    {
        mid=(start+end)/2;
       // printf("START:%d\tEND:%d\tMID:%d\tKEY:%d\ta[mid]:%d\n",start,end,mid,key,a[mid]);
        if(a[mid]==key)
        {
            printf("Find at %d",mid+1);
            break;
        }
        else if(a[mid]<key)
        {
            start = mid + 1;
        }
        else
        {
            end=mid-1;
        }
    }
    while(start<=end);
        if (start>end)
        printf("Failed");
    return 0;
}
