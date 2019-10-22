#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstdio>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    char i,a[101], s[101];
    cin>>s;
    list<char>l(s,(s+strlen(s)));
    list<char>::iterator it;
    while(find(l.begin(),l.end(),'+') != l.end() )
    {
        it=find(l.begin(),l.end(),'+');
        l.erase(it);
    }
   // sort(l.begin(),l.end());

    for(it=l.begin(),i=0;it!=l.end(),i<l.size();it++,i++)
    a[i]=*it;



 /*   list<char>l2(a,a+l.size());
    list<char>::iterator it1;

    for(it1=l2.begin();it1!=(l2.end()-1);it1++)
    cout<<*it1<<"+";
    cout<<*it<<endl;

    */

    sort(a,a+l.size());

    for(i=0;i<(l.size() - 1);i++)
    cout<<a[i]<<"+";
    cout<<a[i];
    cout<<endl;

    return 0;



}
