#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    set<int> :: iterator it;
    s.insert(12);
    s.insert(34);
    s.insert(28);
    s.insert(2);
    for(it=s.begin() ;it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    it=s.find(28);
    s.erase(it);
    for(it=s.begin() ;it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    set<string> name;
    name.insert("Shifat");
    name.insert("Abdur");
    name.insert("Rahman");
    set<string> :: iterator n;
    pair< set <string> :: iterator ,bool > p;
    p=name.insert("Shifat");
    if(p.second==false)
        cout<<"cant"<<endl;
        else cout<<"can"<<endl;

    return 0;
}
