#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int i;
    vector <int> vec;
    vector <int> :: iterator it;
 //    it=vec.begin();


 /*   vector <double> vec2;
    vector <double> :: iterator it2;
    it2=vec2.begin();

    vector <char> vec3;
    vector <char> :: iterator it3;
    it3=vec3.begin();      */

    for(i=1;i<=5;i++)
    {
        vec.push_back(i);
    }
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    cout<<endl;

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout << *it << endl;

    }

    return 0;
}
