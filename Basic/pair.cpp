#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;
int main()
{
    pair <string,int>p;
    p.first="SHifat";
    p.second=31;
    cout<<p.first<<" "<<p.second<<endl;

    pair <string,int>p1;
    p1=make_pair("Mehedi",100);
    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}
