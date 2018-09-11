#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cstdlib>

using namespace std;
int main()
{
    int i,p=0;
    char s[1000];
    vector <char>v;
    vector<char>::iterator it;
    cin.getline(s,1000);
    cout<<s<<endl;
    for(i=0;i<strlen(s);i++)
    v.push_back(s[i]);
    for(it=v.begin();it<v.end();it++)
        cout<<*it;
    while (std::find(v.begin(),v.end(),'"')!=v.end())
    if (std::find(v.begin(),v.end(),'"'))
    p++;
    else ;
    cout<<p<<endl;
    return 0;

}
