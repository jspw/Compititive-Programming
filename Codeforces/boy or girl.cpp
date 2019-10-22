#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,c=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        bool appear =false ;
        for(j=0;j<i;j++)
        {

            if(s[j]==s[i])
            {
                appear = true ;
                break;
            }
        }
        if(!appear)
            c++;
    }
    //cout<<c<<endl;
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
