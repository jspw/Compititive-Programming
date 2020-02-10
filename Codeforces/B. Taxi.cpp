#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int i,a[100001],n;
    long double q,r,s,p;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
            cin>>a[i];
        p=0;
        q=0;
        r=0;
        s=0;
        for(i=0; i<n; i++)

        {
            if(a[i]==4)
                p++;
            else if(a[i]==3)
                q++;
            else if(a[i]==2)
                r++;
            else if(a[i]==1)
                s++;
        }

        if(q>=s)
            cout<< int(p+q+ceil(r/2))<<endl;
        else
        {
            if(int(r)%2!=0)
                cout<<int(p+q+int(r/2)+ceil((2+s-q)/4))<<endl;
            else
                cout<< int(p+q+int(r/2)+ceil((s-q)/4))<<endl;

        }


    }
    return 0;

}
