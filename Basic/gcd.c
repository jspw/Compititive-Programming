#include<stdio.h>
main()
{
    int a,b,x,gcd;
    printf("Enter the value of a & b :\n");
    scanf("%d %d",&a,&b);
    if(a<b) {
        x=a;
    }
    else {
        x=b;
    }
    for(;x>=1;x--) {
        if (a%x==0 && b%x==0) {
            gcd=x;
            break;
        }
    }
    printf("GCD is :%d\n",gcd);
    return 0;
}
