#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,gcd,i;
    while(cin>>a>>b)
    {
        gcd = __gcd(a,b);
        for(i=1;;i++)
        {
            x=i;
            y=(gcd-(a*x))/b;
            if((a*x)+(b*y) == gcd)
                break;
        }
        cout<<x<<" "<<y<<" "<<gcd<<endl;
    }

    return 0;
}
