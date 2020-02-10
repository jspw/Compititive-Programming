#include<iostream>
#include<iterator>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int> :: iterator it;
    m["Dipta"]=12;
    m["Shifat"]=20;
    m["Hridoy"]=56;
    m.insert(make_pair("Abul",50));
    cout<<m["Shifat"]<<endl;
    cout<<m["Abul"]<<endl;

    for(it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;



    return 0;
}
