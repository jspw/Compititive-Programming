#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,z,p=0,j;
    cin>>n>>z;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0,j=n-1;i<n-1;i++,j--)
    {
        if(abs(a[i]-a[j]) >= z){
            p++;
            cout<<a[i]<<" "<<a[j]<<endl;
        }
        else break;
        if(a[i]==a[j])
            break;
    }
    cout<<p<<endl;
    return 0;
}
