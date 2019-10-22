#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m,a,b,c,d,min1,min2,sum;
    char x;
    vector<int>v;
    cin>>t;
    while(t>0)
    {
        min1=0,sum=0,min2=0;
       cin>>n>>m;
       for(i=0;i<n;i++){
       cin>>a>>x>>b>>c>>x>>d;
       min1=a*60+b;
       min2=c*60+d;
//       cout<<"min1 "<<min1<<" "<<"min2 "<<min2<<endl;
       v.push_back(min2-min1);
       }
//        for(i=0;i<v.size();i++)
//       cout<<"V0 "<<v[i];
 //       cout<<endl;

       for(i=0;i<v.size();i++)
       {
           sum=sum+v[i];
       }

//       cout<<"sum"<<sum<<endl;
       if(sum>=m*60)
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       t--;
       v.clear();

    }
    return 0;

}
