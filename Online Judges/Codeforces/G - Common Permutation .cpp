#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string  s1,s2;
    while(getline(cin,s1) && getline(cin,s2))
    {
        std::sort(s1.begin(),s1.end());
        std::sort(s2.begin(),s2.end());

        for(i=0,j=0; i<s1.length() && j<s2.length();)
        {
            if(s1[i]==s2[j])
            {
                cout<<s1[i];
                i++;
                j++;
            }
            else
            {
                if(s1[i] > s2[j])
                    j++;
                else i++;
            }

        }
        cout<<endl;

    }
    return 0;
}
