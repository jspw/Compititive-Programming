#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int p=0,j,i,n,m;
    while(cin>>n>>m){
    for(i=1;i<=n;i++)
    {
        if(m%i==0 && m/i <= n)
        p++;
    }
    cout<<p<<endl;
    p=0;
    }
    return 0;
}
