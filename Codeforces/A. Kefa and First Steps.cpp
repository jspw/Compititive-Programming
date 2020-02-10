#include<bits/stdc++.h>
using namespace std;
bool myf(long int a,long int b)
{
    return (a>b);
}
int main()
{
    long int p=0,n,i,a;
    vector<long int>v;
    vector<long int>::iterator it;
    vector<long int>v1;
    vector<long int>::iterator it1;
    cin>>n;
    for(i=0;i<n;i++){
            cin>>a;
    v1.push_back(a);
    }
    for(it1=v1.begin() ; it1<v1.end() ; it1++)
    {
        if(*(it1+1)  >= *it1){
            p++;
       //     cout<<"a = "<<a[i]<<" "<<"a = "<<a[i+1]<<endl;
       //     cout<<"P = "<<p<<endl;
        }
        else
        {
        //    cout<<"a = "<<a[i]<<" "<<"a = "<<a[i+1]<<endl;

            v.push_back(p);
         //   it=v.begin();
        //    cout<<"P = "<<*it<<endl;
           // it++;
            p=0;
        }
    }

  //  for(it=v.begin();it<v.end();it++)
  //      cout<<*it<<" ";
   // cout<<endl;

    sort(v.begin(),v.end(),myf);

  //  for(it=v.begin();it<v.end();it++)
   //     cout<<*it<<" ";
   // cout<<endl;

    cout<<v[0]+1<<endl;
    return 0;
}
