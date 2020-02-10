#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,x;
    char l,s[1000],a[10];
    vector<char>v;
    cin>>n;
    gets(a);

    for(i=1;i<=n;i++)
    {

        gets(s);
        printf("Case %d: ",i);
        for(j=0;j<strlen(s);j++)
        {
            x=0;
            if(s[j] >= 'A' && s[j] <= 'Z')
                l=s[j];
            else if(s[j] >= '0' && s[j] <= '9')
            {
                x=x+s[j]-'0';
                j++;
                while(s[j] >= '0' && s[j] <= '9')
                {
                    x=x*10+s[j] - '0';
                    j++;
                }
                j--;

                for(k=0;k<x;k++)
                    cout<<l;
            }


        }
        cout<<endl;

    }
    return 0;
}
