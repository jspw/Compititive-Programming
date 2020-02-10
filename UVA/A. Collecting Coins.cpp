#include<bits/stdc++.h>
using namespace std;
long long lg (long long a,long long b ){
    if(a>b) return a ;
    else return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n,mx;
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3==0 & (a+b+c+n)/3 >= lg(a,lg(b,c)) ){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}
