#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<list>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;
int main()
{
    int i;
    map <string,int> m ;
    map <string,int> :: iterator it ;
    m["Dipto"] = 43 ;
    m["Arnab"] = 46 ;
    m.insert(make_pair("Shifat",50)) ;



    printf("%d\n",m["Shifat"]);

    for(it=m.begin() ; it != m.end() ; it ++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}
