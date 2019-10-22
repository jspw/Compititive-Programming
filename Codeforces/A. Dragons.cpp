#include<bits/stdc++.h>
#include<algorithm>

using namespace std;



int main()
{
    long long   int i,j,s,n,a[10000][10];
    cin>>s>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
           cin>>a[i][j];
        }
    }


    for(i=0; i<n; i++)
    {
        if(a[i][0] < s){
            s = s + a[i][1] ;
            cout<<s<<endl;
            }
        else if (a[i][1] <s){
            s = s + a[i][0] ;
            cout<<s<<endl;
            }

        else
        {
            cout<<"NO"<<endl;
            return 0;
            }
    }
    cout<<"YES"<<endl;
    return 0;
}
