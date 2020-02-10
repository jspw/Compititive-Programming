#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p=0,j;
    char s[1000],s1[1000],a[2];
    gets(s);
   // gets(a);
    gets(s1);
    for(i=0,j=strlen(s)-1;i<strlen(s1),j>=0;i++,j--)
    {
        if(s[j] == s1[i])
        p++;
    }

    if ( p == strlen(s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
