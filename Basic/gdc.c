#include<stdio.h>
main()
{
    int b,a,x,gdc;
    printf("Enter the value of a & b:\n");
    scanf("%d %d",&a,&b);
    if(a<b) {
        x=a;
    }
    else {
        x=b;
    }
    for(;x>=1;x--) {
        if(a%x == 0 && b%x == 0) {
            gdc=x;
            break;
        }

    }
     printf("The GDC is :%d\n",gdc);
    return 0;
}
