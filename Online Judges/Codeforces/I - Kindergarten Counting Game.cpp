#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,s=0;
    char str[10000];
    while (gets(str))
    {
        p=0;
        s=0;
        for(i=0; i<strlen(str); i++)
        {
            if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' ) )
                p=1;
            else
            {
                s=s+p;
                p=0;
            }
        }
        s=s+p;
        cout<<s<<endl;
    }
    return 0;
}
