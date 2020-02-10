#include<iostream>
#include<cstdio>
#include<utility>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
    vector <pair <int , string > > v;
    v.push_back(make_pair(21,"Dipto"));
    v.push_back(make_pair(20,"SHifat"));

    cout<<v[0].first<<" "<<v[0].second<<endl;
    cout<<v[1].first<<" "<<v[1].second<<endl;

    vector <pair <int , string > > v1;
    vector<pair<int,string>> :: iterator it1;
    v1.push_back(make_pair(100,"Mehedi"));
    v1.push_back(make_pair(150,"Abir"));
    v1.push_back(make_pair(200,"KUtta"));
    for(it1=v1.begin();it1<v1.end();it1++)
    cout<<it1->first<<" "<<it1->second<<endl;
    return 0;
}
