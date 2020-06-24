#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<sum<<endl;
    return 0;
}
