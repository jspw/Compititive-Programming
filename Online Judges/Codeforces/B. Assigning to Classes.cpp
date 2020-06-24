#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[2*n+1];
        for(int i=0;i<2*n;i++){
            cin>>ar[i];
        }

        sort(ar,ar+2*n);
        cout<<abs(ar[n]-ar[(n)-1])<<endl;
    }
}