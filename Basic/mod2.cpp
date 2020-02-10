#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define i64 long long
i64 m =60;
i64 f(i64 n,i64 p)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        i64 ret=f(n,p/2);
        return ((ret%m)*(ret*m))%m;
    }
    else return ((n%m)*(f(n,p-1)%m))%m;
}
int main()
{
    i64 mod ,p=125,n=5,m=60;
    mod = f(n,p);
    printf("%lld",mod);
    return 0;
}
