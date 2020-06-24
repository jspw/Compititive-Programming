#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i;
    cin>>n;
    char  s[1000];
    while(n--)
    {
        cin>>s;
        l=strlen(s);
        if(l<=10){
        for(i=0;i<l;i++)
        cout<<s[i];
        cout<<endl;
        }
        else if(l>10)
        {
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
    }


    return 0;
}
