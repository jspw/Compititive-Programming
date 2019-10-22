#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,p,d,i,x,sum=1;
    vector<int>v,v1;
    while(cin>>a>>p>>d){
            sum=1;

   // cout<<"Binary of "<<p<<" = ";

    while(p)
    {
        v.push_back(p%2);
        p=p/2;

    }
//
//    for(i=0;i<v.size();i++)
//        cout<<v[i];
//    cout<<endl;

    x=a;
    for(i=1;i<=v.size();i++)
    {
        if(i==1)
            v1.push_back(x%d);
        else{
            x=x*x % d;
        v1.push_back(x);
        }
      //  cout<<x<<" ";

    }
//    cout<<"Mods = ";
//    for(i=0;i<v1.size();i++)
//        cout<<v1[i]<<" ";
//
//    cout<<endl;


 //   cout<<"Usefull mods = ";
    for(i=0;i<v.size();i++){
        if(v[i]==1)
        {
      //      cout<<v1[i]<<" ";
            sum=(sum*v1[i])%d;
        }
    }
  //  cout<<endl;
  //  cout<<"Modular = ";
    cout<<sum%d<<endl;
    v.clear();
    v1.clear();
    }

    return 0;
}


// 2147483647
