#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        if(i&1)
        {
            string s(b,'.');
            if(i%4==1)s[b-1]='#';
            else s[0]='#';
            cout<<s<<endl;
        }
        else{
            string s(b,'#');
            cout<<s<<endl;
        }
    }
}
