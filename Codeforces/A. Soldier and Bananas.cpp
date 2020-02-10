#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum,k,n,w,i ;
    while(cin>>k>>n>>w)
    {
        sum=0;
        for(i=1;i<=w;i++)
        {
            sum=sum+(k*i);
        }
      //  cout<<sum<<endl;
        if(sum>n)
            cout<<sum-n<<endl;
        else cout<<"0"<<endl;

    }
    return 0;
}
