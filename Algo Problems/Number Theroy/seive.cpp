
#include<bits/stdc++.h>
using namespace std;

void seive(int n){
    bool prime [n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++)
    {

        if(prime[i]== true)
        {
            for(int j=i*2;j<=n;j=i+j)
                prime[j] = false;
        }
    }

    for(int i=2;i<=n;i++)
        if(prime[i])
        cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    seive(n);
    cout<<endl;
    return 0;
}
