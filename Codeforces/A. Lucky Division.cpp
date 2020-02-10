#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    long long int i,p=0;
    string s;
    while(cin>>s)
    {
        p=0;
        for(i=0; i<s.length(); i++)
            if(s[i]=='4' || s[i]=='7')
                p++;
        if(p==s.length())
        {
            cout<<"YES"<<endl;
           // return 0;
        }

        /*
            stringstream sh(s);
            int x=0;
            sh>>x;

            if(x%4==0 || x%7==0 || x%47==0)
                cout<<"YES"<<endl;

                */

        else cout<<"NO"<<endl;
    }
    return 0;

}
