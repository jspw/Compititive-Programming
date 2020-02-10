#include<bits/stdc++.h>

using namespace std;

int binaryS(int a[],int k,int n)
{
    int high,low,mid;
    high=n;
    low=1;

    while(high>=low)
    {
         mid=(high+low)/2;

         if(a[mid]>=k && a[mid-1]<k)
    {
        return mid;
    }
        else if(a[mid]>k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

}

int main()
{
    int n,i,sum=0,k,ans;
    cin>>n;
    int a[n+5];
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        sum=sum+k;
        a[i]=sum;
    }

    int m;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>k;
        ans=binaryS(a,k,n);
        cout<<ans<<endl;
    }

    return 0;

}
