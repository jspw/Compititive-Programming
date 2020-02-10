#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h,a,b,k,i,t1,t2,f1,f2,p=0;
    cin>>n>>h>>a>>b>>k;
    for(i=0; i<k; i++)
    {
        p=0;
        cin>>t1>>f1>>t2>>f2;
        if(t1==t2)
        {
            cout<<abs(f1-f2)<<endl;
        }

        else
        {
            while(f1>b)
            {
                f1=f1-1;
                p++;
            }
            while(f1<a)
            {
                f1=f1+1;
                p++;
            }
            cout<<abs(t1-t2)+abs(f1-f2)+p<<endl;
        }
    }

    return 0;

}
