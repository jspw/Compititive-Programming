#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<char,int>mp;
        map<char,int>::iterator it;
        int a;
        char ch;
        for(int i=0; i<n; i++)
        {
            cin>>ch>>a;
            mp.insert(pair<char,int>(ch,a));
        }
        int p;
        cin>>p;
        string str;
        double ans=0;
        getline(cin,str);
        for(int i=0; i<p; i++)
        {

            //       cout<<str<<endl;
            getline(cin,str);
            //         cout<<str<<endl;

            for(int j=0; j<str.size(); j++)
            {
                for(it=mp.begin(); it!=mp.end(); it++)
                {
                    if(it->first==str[j])
                    {
                        ans=ans+it->second;
                        break;
                    }

                }
            }

        }

        cout <<fixed <<setprecision(2) << double(ans/100) <<"$"<< endl;

    }
}
