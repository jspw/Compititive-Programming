#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,o,e;cin>>n;
    if(n%2==0){
    e=o=n/2;

    }
    else{
    o=n/2 + 1;
    e=n/2;
    }
    cout<<e*(e+1) - (o*o)<<endl;
    return 0;
}
