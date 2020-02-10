#include<stdio.h>
int main()
{
    int a,b=9;
    int *p,*q;
    a=5;
    p=&a;
    q=&b;
    printf("%d\t%d\n",a,*p);

    printf("%d\t%d\n",b,*q);


    p=q;
    printf("%d\t%d\n",a,*p);

    printf("%d\t%d\n",b,*q);

    a=56;
    b=98;
        printf("%d\t%d\n",a,*p);

    printf("%d\t%d\n",b,*q);



    return 0;

}
