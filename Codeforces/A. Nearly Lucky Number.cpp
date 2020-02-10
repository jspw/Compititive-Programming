#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int i,p=0,q=0;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            p++;
    }

    std::string n = std::to_string(p);

    for(i=0;i<n.length();i++)
        if(n[i]=='4' || n[i]=='7')
        q++;
    if(q==n.length()){
        cout<<"YES"<<endl;
        return 0;
    }
    stringstream sh(n);
        int x=0;
        sh>>x;
        if(x=='4' || x=='7')
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    return 0;
}
