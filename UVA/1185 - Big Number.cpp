#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    return (n==1 || n==0) ? 1: n * fact(n - 1);
}

int main()
{
    long long t,n,i;
    char str[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        itoa(fact(n),str,10);
        cout<<strlen(str)<<endl;
    }
    return 0;
}
