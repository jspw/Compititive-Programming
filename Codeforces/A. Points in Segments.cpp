#include<bits/stdc++.h>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int p,q=0,j,i,n,m,a,b;
    vector<int>v;
    vector<int>::iterator it;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        cin>>b;
        v.push_back(b);
        for(j=a;j<=b;j++)
            v.push_back(j);
    }

  /*  for(it=v.begin();it!=v.end();it++)
        cout<<*it;
    cout<<endl;

*/
    sort(v.begin(),v.end());


 /*   for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

*/

    for(i=1; i<=m; i++)
    {
        p=0;

        for(it=v.begin(); it<v.end(); it++)
        {
            if(*it==i)
            {
                p++;
                break;
            }

        }

        if(p==0)
            q++;
    }
    cout<<q<<endl;
    for(i=1; i<=m; i++)
    {
        p=0;
        for(it=v.begin(); it<v.end(); it++)
        {

            if(*it==i)
            {
                p++;
                break;
            }

        }

        if(p==0)
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}
