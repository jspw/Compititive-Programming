#include<bits/stdc++.h>
using namespace std;
bool myfunction(int a,int b)
{
    return a<b;
}
int main()
{
    long int t,n,a,b,i,j,p,x;
    vector <long int> v1;
    vector <long int> v2;
    cin>>t;
    while(t>0)
    {
        p=0;
        x=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
            cin>>b;
            v2.push_back(b);
        }
        sort(v1.begin(),v1.end(),myfunction);
        sort(v2.begin(),v2.end(),myfunction);
        for(i=0,j=0;i<n && j<n;)
        {
            if(v1[i]<v2[j]){
                p++;
                i++;
            }
            else
            {
                p--;
                j++;
            }
            x=max(x,p);
        }
        cout<<x<<endl;
        v1.clear();
        v2.clear();
        t--;

    }
    return 0;
}
