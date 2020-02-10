
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    set < int > r;
    set < int > c;
    while(t--)
    {
        int n,a ;
        cin>>n;
        for ( int i = 0 ; i < n ; i++)
        {
            for ( int j = 0 ; j < n ; j++)
            {
                cin >> a ;
                if ( a == 0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }

        if ( r.size() == n && r.size() == n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        r.clear();
        c.clear();
    }
    return 0 ;
}
