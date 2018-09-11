#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,d,e;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='h')
        e=i;
        if(s[i]=='e')
        d=i;
        if(s[i]=='l')
        c=i;
        if(s[i]=='l')
        b=i;
        if(s[i]=='o')
        a=i;

    }
    if(a>b && b==c && c>d && d>e)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
