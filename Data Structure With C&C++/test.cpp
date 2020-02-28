#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int>v[100];

        v[0].push_back(1);
        v[1].push_back(1);

    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    v.clear();
    cout<<endl;

    cout<<"r"<<endl;

    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}
