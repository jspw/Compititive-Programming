#include<bits/stdc++.h>
using namespace std;
long int n,x,y,i,p=0;
string str;
int main()
{
    cin>>n>>x>>y>>str;

    for(i=n-x;i<str.size();i++)
    {
        if(i!=(n-y-1) && str[i]=='1')
            p++;
        if(i==(n-y-1) && str[i]=='0')
            p++;
    }
    cout<<p<<endl;
    return 0;
}
