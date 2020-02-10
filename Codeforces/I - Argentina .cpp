#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<iterator>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
    int i;
    string name1,n2;
    int att1,dif1;
    cin>>name1>>att1>>dif1;
    map<string,int ,int> name ;
    map<string,int ,int> :: iterator it;
    name.insert(make_pair(name1,att1,dif1));

}
