#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int c=0,i,d;
    char s[100];

    cin>>d>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1])
        c++;
    }
    cout<<c<<endl;
    return 0;
}
