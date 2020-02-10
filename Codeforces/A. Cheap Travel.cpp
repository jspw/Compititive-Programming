#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<int((floor(n/m) * b) + (( n - (floor(n/m)) * m )*a ))<<endl;
    return 0;
}
