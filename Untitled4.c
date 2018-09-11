#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y,t;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> y;
        x=(((((y*567)/9)+7492)*235)/47)-498;
     /*   x=x/9;
        x=x+7492;
        x=x*235;
        x=x/47;
        x=x-498; */
        t=(x/10)%10;
        if (t<0)
        {
            t=-t;
            cout <<"Case" i<<":" <<t;
        }
        else
        cout <<"Case" i<<":" <<t;
    }
            return 0;

}
