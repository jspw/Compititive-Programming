#include<bits/stdc++.h>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
bool myf(long int a,long int b)
{
    return (a>b);
}
int main()
{
    long int n,i,a[1000001],p=1;
    vector<long int>v;
    vector<long int> :: iterator it;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
   // {
   //     cout<<a[i]<<" ";
 //   }
  //  cout<<endl;

    for(i=1; i<n; i++)
    {
        if(a[i]==a[i-1])
        {
            p++;
     //       cout<<p<<" ";
        }
        else
        {
       //     cout<<p<<endl;
            v.push_back(p);
            p=1;
        }
    }
    sort(v.begin() , v.end() , myf);

    it=v.begin();
    cout<<*it<<endl;

    return 0;

}
