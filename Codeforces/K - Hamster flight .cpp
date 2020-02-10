#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416
int main()
{
    int t;
    double k1,k2,v,thita,points,h,r;
    cin>>t;
    while(t--)
    {
        cin>>v>>k1>>k2;
        thita = (atan(4*k1/k2))*0.0174533 ;
        h=v*v*sin(thita)*sin(thita)/2/10;
        r=v*v*sin(2*thita)/10;
        printf("%.3lf %.3lf\n",thita,k1*r+k2*h) ;
    }
    return 0;
}
