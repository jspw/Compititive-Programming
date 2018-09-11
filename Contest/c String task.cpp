#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=tolower(a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
        if( (a[i]=='a') || (a[i]=='e') || (a[i]=='i') || (a[i]=='o') || (a[i]=='u') || (a[i]=='y') ){
        a[i]=a[i+1];
        if(a[i])
        }
    }
    cout<<a;
    return 0;
}
