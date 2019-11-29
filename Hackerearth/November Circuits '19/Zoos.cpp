
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int x=0,y=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='z') x++;
        else if(str[i]=='o') y++;
    }

    if(2*x==y)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;


}
