#include<stdio.h>

main()
{
    float a,b,c,media;
    while(scanf("%.f  %.f  %.f",&a,&b,&c)!=EOF)
    {
       media = (a*2 + b*3 +c*5)/10.0;
       printf("MEDIA = %.f",media);
    }
    return 0;
}

