#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p=0;
    char s[1000];
    cin>>s;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]==s[i+1])
        p++;
        else p=0;
        if(p>=6){
         cout<<"YES"<<endl;
         return 0;
         }



    }
    cout<<"NO"<<endl;
    return 0;
}
