#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iterator>
#include<list>
#include<vector>
#include<map>
#include<queue>
#include<utility>

using namespace std;

int main()

{
    int roll;
    string name;
    cin>>name>>roll;
    pair <string,int> p;

    p= make_pair (name,roll) ;

    cout<<p.first<<" "<<p.second<<endl;

    return 0;

}

