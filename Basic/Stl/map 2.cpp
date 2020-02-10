#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iterator>
#include<list>
#include<vector>
#include<map>
#include<queue>

using namespace std;

int main()

{
    map <string,int> m;

    map <string,int> :: iterator it ;

    m["SHifat"] = 01 ;

    m["Alif"] = 02 ;

    m["Tanvir"] = 11 ;

    m["Hridoy"] = 06 ;


    m.insert(make_pair("Rana",15)) ;

     it=m.begin() ;

    cout<<m["Tanvir"]<<endl;

    cout<<it->first<<endl;

    cout<<it->second<<endl;

    for(it=m.begin();it!=m.end();it++)

    {
        cout<<it->first<<" "<<it->second<<endl;


    }

    return 0;
}
