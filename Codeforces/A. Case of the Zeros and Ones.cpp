#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0,q=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='0')
            p++;
        else q++;
    }

    if(p==n )
        cout<<n<<endl;
    else if(q==n)
        cout<<n<<endl;
    else {
        cout<<n-2*min(p,q)<<endl;
    }
    return 0;
}
