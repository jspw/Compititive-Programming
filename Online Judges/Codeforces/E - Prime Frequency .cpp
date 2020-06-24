#include<bits/stdc++.h>
using namespace std;
bool mys (int a,int b)
{
    return a>b ;
}
int main()
{
    int t,i,j,p;
    string s;
    set<char>st;
    vector <int > v;
    cin>>t;
    while(t--)
    {
        p=0;
        getline(cin,s);
        std :: sort(s.begin(),s.end());
        for(i=48; i<= 57; i++)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[i] == s[j] && i!=j)
                {
                    st.insert(s[i]);
                    p++;
                }

            }
            v.push_back(p);for(i=48; i<= 57; i++)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[i] == s[j] && i!=j)
                {
                    s.insert(s[i]);
                    p++;
                }

            }
            v.push_back(p);
        }
        }



        for(i=65; i<= 90; i++)
        {
            for(j=0;j<s.length();j++)for(i=48; i<= 57; i++)
        {
            for(j=0;j<strlen(s);j++)
            {
                if(s[i] == s[j] && i!=j)
                {
                    s.insert(s[i]);
                    p++;
                }

            }
            v.push_back(p);
        }
            {
                if(s[i] == s[j] && i!=j)
                {
                    st.insert(s[i]);
                    p++;
                }

            }
            v.push_back(p);
        }



        for(i=97; i<= 122; i++)
        {
            for(j=0;j<s.length();j++)
            {
                if(s[i] == s[j] && i!=j)
                {
                    st.insert(s[i]);
                    p++;
                }

            }
            v.push_back(p);
        }

        mx = v[0];
        for(i=1;i<v.size();i++)
        {
            if(v[i] > mx)
                mx = v[i];
        }

        for(i=0;i<v.size();i++)
        {
            if(v[i] == mx)
                w=i;
        }




    }

}
