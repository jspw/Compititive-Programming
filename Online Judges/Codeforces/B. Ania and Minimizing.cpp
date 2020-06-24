#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(a<1)
            break;

        if(n==1)
        {
            str[i]='0';
            a--;
        }
        else if(i==0 && str[i]!='1'){
            str[i]='1';
            a--;
        }
        else if(i!=0 && str[i]!='0')
        {
            str[i]='0';
            a--;
        }
    }
    cout<<str<<endl;
    return 0;
}
