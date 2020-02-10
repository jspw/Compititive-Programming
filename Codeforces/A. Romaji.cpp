#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,p=0,q=1;
    char  a[1000];
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;i=i+1)
    {
            if( a[i]!= 'a' && a[i]!= 'e' && a[i]!= 'i' && a[i]!= 'o' && a[i]!= 'u' && a[i]!='n' ){

                if(a[i+1]=='a' || a[i+1]=='e'|| a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u')
                    p++;
                else
                    q=0;

           }

    }

    if (q==0)
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
