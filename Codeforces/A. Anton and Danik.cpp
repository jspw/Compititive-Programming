#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,p=0,q=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='D')
            p++;
        else
            q++;
    }
    if(p==q)
        cout<<"Friendship"<<endl;
    else if(p>q)
        cout<<"Danik"<<endl;
    else
        cout<<"Anton"<<endl;
    return 0;
}
