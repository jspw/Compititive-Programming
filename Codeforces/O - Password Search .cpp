#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j;
    string s;
    while(scanf("%d",&n) != EOF )
          {
              getline(cin,s);
              sort(s.begin(),s.end());
              for(i=0;i<s.size();i++)
                {
                    p=0;
                    for(j=0;j<s.size();j++)
                    {
                        if(s[i] == s[j] && i!=j)
                            p++;
                    }


                }
          }
}
