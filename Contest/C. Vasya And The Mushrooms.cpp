
//unsolved


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,sum=0,i,a;
    set<long long int>st;
    set<long long int>::iterator it;
    cin>>n;
    for(i=0;i<2*n;i++){
        cin>>a;
        st.insert(a);
    }

    for(it=st.begin();it!=st.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;



   for(it=st.begin(),i=0;it!=st.end(),i<st.size();it++,i++)
   {
       sum=sum+(i*(*it));
   }
    cout<<sum<<endl;
    return 0;
}
