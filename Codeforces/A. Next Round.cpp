#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a[1000],key,p=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    key=a[k-1];

    if(a[0]!=0) {
        for(i=0;i<n;i++)
        {
            if(a[i]>=key && a[i]>0)
            p++;

        }
        cout<<p<<endl;
    }

    else
    cout<<0<<endl;
    return 0;

}
