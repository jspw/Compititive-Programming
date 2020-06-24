#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a>=b)
            cout<<"YES"<<endl;
        else if((a<=2 || a-1<=2) && b>3 || a==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
