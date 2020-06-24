#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,temp,n,i,t;
    string s;
    while(cin>>n>>t)
    {
        cin>>s;
        for(j=0; j<t; j++)
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='B' && s[i+1]== 'G')
                {
                    temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    i++;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
