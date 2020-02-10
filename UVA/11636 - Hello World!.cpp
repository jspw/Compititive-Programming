#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,t=0,n;
    while(cin>>n)
    {
        if(n<1)
            return 0;

        t++;
        cout<<"Case "<<t<<": ";
        if(n==1)
            cout<<0<<endl;
        else cout<<ceil(log2(n))<<endl;

    }
    return 0;
}
