
#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
    int f[n+1];
    if(n<=1){
        cout<<n<< " ";
        exit;
    }

    f[0]=0;
    f[1]=1;
    cout<<0<<" "<<1<<" ";

    for(int i=2;i<=n;i++)
    {
        f[i] = f[i-1]+f[i-2];
        cout<<f[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
