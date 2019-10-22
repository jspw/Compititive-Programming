#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,take,j;
    bool bal=true;
    char ch;
    vector<int>v,v1;
    string str;
    cin>>n;
    cin>>str;
    for(i=1;i<=9;i++)
    {
        cin>>a;
        if(a>i){
            v.push_back(i);
            v1.push_back(a);
        }

    }

    if(v.empty()){
        cout<<str<<endl;
        return 0;
    }

    for(i=0;i<v.size();i++)
        cout<<v[i]<<" "<<v1[i]<<endl;

    for(i=0;i<v.size();i++)
    {
        for(j=0;j<str.size();j++){
            if(v[i] == (str[j]-'0')) {
                take = i;
                ch=str[j];
                bal=false;
                break;
            }

            if(!bal){
                break;
            }
        }
    }

    cout<<v[take]<<" "<<v1[take]<<endl;

    for(i=0;i<str.size();i++)
    {
        if(str[i]==ch)
        {
            str[i]=v1[take]+'0';
        }
    }
    cout<<str<<endl;
    return 0;
}
