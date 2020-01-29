#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    map<string,int>mp;
    map<string,int>::iterator it;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>str;
        bool check =false;
        if(!mp.empty())
        {
            for(it=mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str)
                {
                    check=true;
                    it->second++;
                }

            }
            if(!check)
                mp.insert(pair<string,int>(str,1));

        }

        else
            mp.insert(pair<string,int>(str,1));

    }
    int mx=-1;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>mx)
        {
            mx=it->second;
        }
    }

    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second==mx)
        {
            cout<<it->first<<endl;
            break;
        }
    }



    return 0;
}
