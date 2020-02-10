#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,l1,p=1,q=1;
    char s[1000],s1[1000];
    cin>>s>>s1;
    l=strlen(s);
    l1=strlen(s1);
    if(l==l1){

        for(i=0;i<l;i++)
        {
            s[i]=toupper(s[i]);
        }
        for(i=0;i<l1;i++)
        {
            s1[i]=toupper(s1[i]);
        }

        for(i=0;i<l;i++)
        {
            if(s[i]>s1[i]){
            p=0;
            cout<<1<<endl;
            break;
            }
            else if(s[i]<s1[i]){
            q=0;
            cout<<-1<<endl;
            break;
            }

        }
        if(p==1 && q==1)
         cout<<0<<endl;

    }
    else if(l>l1)
    cout<<1<<endl;
    else if(l1>l)
    cout<<-1<<endl;
    return 0;
}
