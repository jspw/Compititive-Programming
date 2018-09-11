#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    float Ox,Oy,Ax,Ay,Bx,By,s,t,r,y,b,p;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%f%f%f%f%f%f",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
        y=(Ox-Bx)*(Ox-Bx)+(Oy-By)*(Oy-By);
        b=(Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By);
        r=sqrt(y);
        t=(2*y*y)-(b*b)/(2*y*y);
        p=pow(cos(t),-1) * PI / 180;

        s=(r * p);

        printf("Case %d: %f\n",i,s);
    }



    return 0;
}
