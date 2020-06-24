#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--)
    {
        long int n;
        cin>>n;
        if(n%2!=0)
            cout<<1<<endl;
        else if(n==2)
            cout<<2<<endl;
        else cout<<0<<endl;
    }

    return 0;

}
