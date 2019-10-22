#include<bits/stdc++.h>
using namespace std;
long long dist[1000][1000];
vector<long long>bal;
int lcs(vector<long long>a,vector<long long>b,long long x,long long y)
{

}
int main()
{
long long x,y;
    vector<long long>a;
    vector<long long>b;
    long long l,m,c[10000];
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>l;
        a.push_back(l);
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>m;
        b.push_back(m);
    }
     for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(i==0 || j==0)
            {
                dist[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                dist[i][j]=dist[i-1][j-1]+1;
            }
            else
                dist[i][j]=max(dist[i-1][j],dist[i][j-1]);
        }
    }

       for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    long long i=x,j=y;
     while(i >= 0 && j >= 0 )
     {
        // cout << i << " " << j << endl;
         if ( dist[i][j] == 0) break ;

         if (dist[i][j] == dist[i][j-1]) j-- ;
         else if (dist[i][j] == dist[i-1][j]) i-- ;
         else if(dist[i][j] == dist[i-1][j-1]+1)
         {
             bal.push_back(b[j-1]);
             i--;
             j--;
         }

     }
    reverse(bal.begin(),bal.end());
    for ( int i = 0 ; i < bal.size() ; i++) cout << bal[i] << " ";
    cout << endl;

    /*cout<<bal.size()<<endl;
    for(int i=0;i<bal.size();i++)
        cout<<bal[i]<<" ";
    cout<<endl;
    */
    for(int i=0;i<bal.size();i++)
        c[i]=1;
    for(int i=1;i<bal.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(bal[i]>bal[j]&&c[j]+1>c[i])
                c[i]=c[j]+1;
        }
    }
    long long len=bal.size(),kh[1000],k=0;
    cout<<*max_element(c,c+len)<<endl;
    long long res=*max_element(c,c+len);
    for(int i=len-1;i>=0;i--)
    {
        if(c[i]==res)
        {
            kh[k]=bal[i];
            res--;
            k++;
            if(res<=0)
              break;
        }
    }
    for(int i=k-1;i>=0;i--)
        cout<<kh[i]<<" ";
   return 0;
}
