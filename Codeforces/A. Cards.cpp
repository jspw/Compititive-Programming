#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    int z=0,n=0;
    for(int i=0; i<a; i++)
    {
        if(str[i]=='z')
            z++;
        else if (str[i]=='n')
            n++;
    }

    for(int i=1; i<=n; i++)
        cout<<1<<" ";
    for(int i=1; i<=z; i++)
        cout<<0<<" ";

    cout<<endl;
    return 0;
}
