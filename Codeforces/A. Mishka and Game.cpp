#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,c,t,ms=0,cs=0,dw=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m>>c;
        if(m>c)
            ms++;
        else if(c>m)
            cs++;
        else dw++;
    }
    if(ms>cs)
        cout<<"Mishka"<<endl;
    else if(cs>ms)
        cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;

}
