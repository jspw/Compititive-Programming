#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,p=0,c,k;
    char a[100001],s[3];
    cin>>t;
    while(t>0)
    {
        cin>>c>>k;
        gets(s);
        gets(a);
        for(i=0; i<c; i++)
        {
            if(a[i]=='0')
            {
                p++;
            }
            else p=0;
            if(p>=k+1)
            {
                break;
            }

        }
        if(p>=k+1)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        p=0;
        t--;

    }
    return 0;
}
