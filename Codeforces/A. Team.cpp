#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q=0,i,j,n,a[1000][3];
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

  /*  for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }


    cout<<endl;

    */

    for(i=0; i<n; i++)
    {
    p=0;
        for(j=0; j<3; j++)
        {
            if(a[i][j] == 1)
            p++;
          //  cout<<p<<'i'<<i<<'j'<<j<<endl;;
        }
       // cout<<p<<endl;
        if(p>=2)
        q++;
     //   cout<<q<<endl;

    }
    cout<<q<<endl;
    return 0;


}
