#include<bits/stdc++.h>
//vai code ta run hosse na
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,c,k,n;
        char a[n],x;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a[i]=x;

        }
        while(k!=0)
        {
            i=n-1;
            c=0;
            if(a[i]=='H')
            {
                for(j=0;j<i;j++)
                {
                    if(a[j]=='H')
                       a[j]=='T';
                    else
                    {
                        a[j]=='H';
                        c++;

                    }

                }
            }
            else
            {
                for(j=0;j<i;j++)
                {
                    if(a[j]=='H')
                        c++;

                }
            }
            k--;
            i--;

        }
        cout<<c<<endl;

    }
    return 0;
}