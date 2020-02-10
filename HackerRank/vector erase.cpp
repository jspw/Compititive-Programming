#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,c,p,a,b;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        v.push_back(c);
    }

    cin>>p;
    v.erase(v.begin()+p-1);

    cin>>a>>b;

    v.erase(v.begin()+a-1 , v.begin()+b-1 );

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;


    return 0;
}

