#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0;
    string  a;
    cin>>a;
    if(strlen(a)>=7)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6])
                j++;
        }
        if(j>=1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
