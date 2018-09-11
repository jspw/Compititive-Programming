#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int p,n,i,j;
    char s[10000];
    cin>>n;
    while(1)
    {
        p=0;
        n=n+1;
        std :: string s= std :: to_string (n);

        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
            if(i!=j && s[i]!=s[j])
            p++;
        if(p==12)

        {
            cout<<n<<endl;
            return 0;
        }

    }

    return 0;
}
