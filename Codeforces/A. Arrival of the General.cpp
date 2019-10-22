#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[1000],mx,mn;
    vector<int>vec;
    vector <int > :: iterator it;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }

    mx=*max_element(a,a+n);
    mn=*min_element(a,a+n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<mx<<" "<<mn<<endl;
    for(i=0; i<n; i++)
    {
        if(a[i]==mx){
            mx=i;
            cout<<a[i]<<"="<<i<<endl;
        }

    }

    for(i=0; i<n; i++)
    {
         if(a[i]==mn){
            mn=i;
            cout<<a[i]<<"="<<i<<endl;
        }
    }

    cout<<mx<<" "<<mn<<endl;
    if(mx>mn)
        cout<<(mx-0) + (n-1-mn) -1 <<endl;
    else cout<<(mx-0) + (n-1-mn) <<endl;


    return 0;



}
