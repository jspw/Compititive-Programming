#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i,y;
    char  temp,s[1000];
    cin>>s;
    y=strlen(s);
    for(i=0;i<y-2;i++)
    {
        if(s[i]>s[i+1])
        {

            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;

        }


    }
    cout<<s<<endl;
    return 0;



}
