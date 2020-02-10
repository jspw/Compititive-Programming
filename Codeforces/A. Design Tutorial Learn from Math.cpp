#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,a,b,n,p=4,q=0,r=0;
    cin>>n;
    while(1)
    {
        a=p;
        b=n-a;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                q=1;
        ///        cout<<"check a "<<q<<endl;
                break;
            }

        }
        for(i=2;i<=b/2;i++)
        {
            if(b%i==0)
            {
                r=1;
    ///            cout<<"check b "<<r<<endl;
                break;
            }

        }
        if(q==1 && r==1 )
        {
            cout<<a<<" "<<b<<endl;
            return 0;
        }
        else
            p++;
        q=0;
        r=0;

    }

}
