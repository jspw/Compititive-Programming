#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  double t,x,y,n,m,a;
    cin>>n>>m>>a;
    y=ceil(m/a);
    x=ceil(n/a);
    t=x*y;
    cout<<(long long)t;
    return 0;

}
