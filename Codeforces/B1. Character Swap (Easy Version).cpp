
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        int p=0;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(str1[i]!=str2[i])
            {
                p++;
                v.push_back(i);
            }
        }

        if(p==2)
        {
            char c = str1[v[0]];
            str1[v[0]] = str2[v[1]];
            str2[v[1]] = c;

  //          cout<<str1[v[0]]<<" "<<str2[v[1]]<<endl;

            int q=0;
            for(int i=0; i<n; i++)
            {
                if(str1[i]!=str2[i])
                {
                    q++;
                }
            }

            if(!q){
                cout<<"YES"<<endl;
            }

            else
                cout<<"NO"<<endl;
        }


        else cout<<"NO"<<endl;

    }
}
