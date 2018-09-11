#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    int n,k,i;
    string s;
    cin>>n>>k>>s;
    sort( s.begin() , s.end()) ;
    for(i=0;i<n;i++)
    cout<<s[i];
    cout<<endl;
    for(i=k+1;i<n;i++)
    cout<<s[i];
    return 0;

}
