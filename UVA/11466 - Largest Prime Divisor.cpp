#include<bits/stdc++.h>
using namespace std;

vector<long long>v;

void seive(long long  n){
    bool prime [n+1];
    memset(prime,true,sizeof(prime));

    for(long long i=2;i*i<=n;i++)
    {

        if(prime[i]== true)
        {
            for(long long j=i*2;j<=n;j=i+j)
                prime[j] = false;
        }
    }

    for(long long i=2;i<=n;i++)
        if(prime[i])
        v.push_back(i);
}

int main()
{
    long long n,p;
    bool bal=false;
    while(cin>>n , n!=0)
    {
        seive(n);

        cout<<v.size()<<endl;

        for(long long i=v.size()-1;i>=0;i--){
                if(n==v[i])
                {
                    bal= false;
                    break;
                }
          else if(n%v[i]==0)
            {
               bal=true;
               p=v[i];
               break;
            }
        }


            if(bal)
                cout<<p<<endl;
            else cout<<-1<<endl;

            v.clear();


    }
    return 0;
}
