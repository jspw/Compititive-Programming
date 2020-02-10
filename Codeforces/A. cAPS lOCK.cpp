#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,p=0,q=0;
    char s[1000];
    cin>>s;
    if(strlen(s)>1){

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i] <= 'z')
        q++;
    }
    if(q==strlen(s))
    {
        cout<<s<<endl;
        return 0;
    }

     p=0;
    q=0;

        for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i] <= 'Z')
        p++;
    }
    if(p==strlen(s))
    {
        for(i=0;i<strlen(s);i++)
        s[i]=tolower(s[i]);
        cout<<s<<endl;
        return 0;
    }
    p=0;
    q=0;

    for(i=1;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i] <= 'Z')
        p++;

    }
    if(s[0]>='a' && s[0] <= 'z' && p==(strlen(s)-1))
    {
        s[0]=toupper(s[0]) ;
        for(i=1;i<strlen(s);i++)
    {
        s[i]=tolower(s[i]);

    }
    cout<<s<<endl;
    return 0;
    }

    else
    {
        cout<<s<<endl;
        return 0;
     }
     }
     else if(strlen(s) == 1) {
        if(s[0] >= 'A' && s[i] <= 'Z'){
        s[0]=tolower(s[0]);
        cout<<s<<endl;
        return 0;
        }
        else {
            s[0]=toupper(s[0]);
        cout<<s<<endl;
        return 0;
        }
     }
     return 0;



}
