#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        bool check = false;
        cin>>str;
        for(int i=0; i<str.size()-1; i++){
            if(str[i] !='?' && str[i]==str[i+1]){
                    check = true;
                break;
            }

        }

        if(check)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<str.size(); i++)
            {
                if(str[i]=='?')
                {
                    if(str[i-1]=='a')
                    {
                        if(str[i+1]!='b')
                            str[i]='b';
                        else str[i]='c';
                    }

                    else if(str[i-1]=='b')
                    {
                        if(str[i+1]!='a')
                            str[i]='a';
                        else str[i]='c';
                    }
                    else
                    {
                        if(str[i+1]!='a')
                            str[i]='a';
                        else str[i]='b';
                    }

                }
            }

            cout<<str<<endl;

        }

    }

    return 0;
}
