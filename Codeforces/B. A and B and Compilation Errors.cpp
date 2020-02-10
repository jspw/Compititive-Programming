#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long int n,i,a[100000],b[100000],c[100000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    cin>>b[i];
    for(i=0;i<n-2;i++)
    cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);

    for(i=0;i<n;i++){
        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
        for(i=0;i<n;i++){
        if(b[i]!=c[i])
        {
            cout<<b[i]<<endl;
            break;
        }
    }

    return 0;

}


