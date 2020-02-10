#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    char c,s[100000];

    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(c='a';c<='z' && k>0;c++)
    {
        for(i=0;i<n && k>0;i++)
        {
            if(s[i]==c)
            k--,s[i]=0;
        }

    }

    for(i=0;i<n;i++)
    cout<<s[i];
    return 0;

}
