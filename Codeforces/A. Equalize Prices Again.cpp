#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    long int t;
    cin>>t;
    for(long int j=0; j<t; j++)
    {
        cin>>n;
        long  int m,sum=0;
        for(long int i=0; i<n; i++)
        {
            cin>>m;
            sum=sum+m;
   //         cout<<sum<<endl;
        }
        if(n*(sum/n)==sum){
            cout<<sum/n<<endl;

        }

        else
            cout<<sum/n+1<<endl;
    }

    return 0;
}
