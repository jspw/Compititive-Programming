#include<BITS/STDC++.H>
using namespace std;
int main()
{
    int a,b,x,sum,reminder;
    while(cin>>a>>b)
    {
        sum=0;
        while(1)
        {
            x=a/b*b;
            sum=sum+x;
            reminder =a-x;
            a = reminder+(a/b);
            if(a<b)
            {
                sum=sum+a;
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
