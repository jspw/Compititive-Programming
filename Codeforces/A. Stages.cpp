#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,sum=0;
    vector<char>v;
    char s[n+1];
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>s[i];
    if(n!=0)
    {
        sort(s,s+n);
        v.push_back(s[0]);
       // for(i=0;i<n;i++)
         //   cout<<s[i];
           // cout<<endl;
        for(i=0;i<n-1;i++)
        {
            if(s[i+1]-1>v[v.size()-1])
                v.push_back(s[i+1]);
               // else if (s[i+1]==v[v.size()-1])
                  //  v.push_back(s[i+1]);

        }
       // for(i=0;i<v.size();i++)
         //  cout<<v[i];
           //cout<<endl;

        if(k>v.size()){
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            for(i=0;i<k;i++)
            sum=sum+v[i]-96;
        }
        cout<<sum<<endl;

    }
}

