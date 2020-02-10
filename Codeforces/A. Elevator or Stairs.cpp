#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,t2,t3,x,y,z,lift,stair;
    cin>>x>>y>>z>>t1>>t2>>t3;
    stair = abs(x-y)*t1;
    lift=abs(x-z)*t2 + abs(x-y)*t2 + 2*t3 + t3;
    if(lift<=stair)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
