#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, t, x, y, s=0, l;
    cin >> t;
    while (t--)
    {
        s=0;
        string a, b, c;
        cin >> a;
        l=a.size();
        char z;
        for(i=0; i<l; i++)
        {
            b[i]='f';
            c[i]='f';
        }

        z=a[0];
        for(i=0; i<l-1; i++)
            b[i]=a[i+1];
        b[l-1]=z;
        z=a[l-1];
        for(i=l-1; i>0; i--)
            c[i]=a[i-1];
        c[0]=z;
        s=0;
        for(i=0; i<l; i++)
        {
            if(b[i]==c[i])
                s++;
        }
        if(s==l)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
        
    }
    
}