#include<bits/stdc++.h>
using namespace std;
bool bl(int long long a,long long int b)
{
    return (a>b);
}
int main()
{
    long long int n, sum,i,a[1000000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n,bl);

    for(i=0;i<n;i++)
    {
        sum=sum+(a[0] -a[i] ) ;
    }
    cout<<sum<<endl;
    return 0;


}
