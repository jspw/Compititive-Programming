#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
      //  cout<<a<<b<<c<<endl;

        if(c==b || c==a){
            cout<<"Yes"<<endl;
        }else{
            bool bal = false;
            for(int i=0;i<a.size();i++){
                if(a[i]!=c[i] && b[i]!=c[i]){
                   bal = true;
                    break;
                }
            }

            if(bal){
                cout<<"No"<<endl;
            }else cout<<"Yes"<<endl;
        }
    }

    return 0;

}
