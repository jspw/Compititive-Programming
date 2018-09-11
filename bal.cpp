#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int i,test;
    int Ox,Oy,Ax,Ay,Bx,By;
    double AB,OB,s,alpha,t;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        AB = (Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By);
        AB = sqrt(AB);

        OB = (Ox-Bx)*(Ox-Bx)+(Oy-By)*(Oy-By);
        OB = sqrt(OB);

       t = 2*OB*OB - AB*AB;
        t = t/(2*OB*OB);

        alpha = acos (t ) ;
        s = alpha * OB ;
        printf("Case %d: %lf\n",i,s);
    }
    return 0;
}
