#include<bits/stdc++.h>
#include<cstring>;
using namespace std;
int ar[24][60];
int main()
{
    long int n;

    cin>>n;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        ar[a][b]++;
        mx=max(mx,ar[a][b]);
    }

    cout<<mx<<endl;


    return 0;
}
