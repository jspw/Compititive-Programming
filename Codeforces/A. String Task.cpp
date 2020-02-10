#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<cstring>
#include<cstdio>
#include<cstdlib>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char  s[1000];
    cin>>s;

    list<char>st(s,s+(strlen(s)));
    list<char>::iterator it;
    list<char>::iterator it1;

     for(it=st.begin();it!=st.end();it++)
     *it=tolower(*it);

    while(find(st.begin(),st.end(),'a')!=st.end())
    {
        it=find(st.begin(),st.end(),'a');
        st.erase(it);
    }
    while(find(st.begin(),st.end(),'e')!=st.end())
    {
        it=find(st.begin(),st.end(),'e');
        st.erase(it);
    }
    while(find(st.begin(),st.end(),'i')!=st.end())
    {
        it=find(st.begin(),st.end(),'i');
        st.erase(it);
    }
    while(find(st.begin(),st.end(),'o')!=st.end())
    {
        it=find(st.begin(),st.end(),'o');
        st.erase(it);
    }
    while(find(st.begin(),st.end(),'u')!=st.end())
    {
        it=find(st.begin(),st.end(),'u');
        st.erase(it);
    }
    while(find(st.begin(),st.end(),'y')!=st.end())
    {
        it=find(st.begin(),st.end(),'y');
        st.erase(it);
    }

    //  for(it=st.begin();it!=st.end();it++)
    //  cout<<*it;
    // cout<<endl;



    for(it=st.begin(); it!=st.end(); it++)
        cout<<"."<<*it;
    cout<<endl;

    return 0;
}
