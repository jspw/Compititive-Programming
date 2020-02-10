#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    int i;
    set<char>s;
    set<char>:: iterator it;
    char  a[1001];
    cin.getline (a,1001);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] >= 'a' && a[i] <='z')
            s.insert(a[i]);
    }
    //for(it=s.begin();it!=s.end();it++)
     //   cout<<*it;
  // cout<<endl;
    cout<<s.size()<<endl;
    return 0;
}
