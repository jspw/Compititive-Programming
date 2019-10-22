#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,y=0;
    char s[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        y=y+1;
        else
        y=y-1;
    }
    cout<<y<<endl;

}
