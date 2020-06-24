#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int sum=0;
        bool odd =false,even=false;
        for(int i=0;i<n;i++){
            cin>>a;
            sum=sum+a;
            if(a%2==0){
                odd = true;
            }else even = true;
        }

        if(even && odd | sum%2!=0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}