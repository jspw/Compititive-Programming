#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i, n,k,a,sum=0;
    vector<int>v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+ceil(a/k);
    }
    cout<<int(sum)<<endl;
    return 0;
}
