#include<bits/stdc++.h>
using namespace std;
int main()
{
    int long q;
    cin>>q;
    for(int long i=0; i<q; i++)
    {
        long long   n,a;
        bool check=false;
        cin>>n;
        vector<long long>v;
        set<long long>s;
        for(int long j=0; j<n; j++)
        {
            cin>>a;
            if(a<=2048)
            {
                v.push_back(a);
                s.insert(a);
            }
            if(a==2048)
                check=true;

        }

        if(check)
            cout<<"YES"<<endl;
        else
        {
            if(s.size()==v.size())
                cout<<"NO"<<endl;

            else
            {
                long long sum=0;
                for(int long j=0; j<n; j++)
                {
                    sum=sum+v[i];
                    if(sum==2048)
                    {
                        check=true;
                        break;
                    }

                }

                if(check)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


            }
        }

    }

}
