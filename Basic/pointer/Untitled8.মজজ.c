#include<stdio.h>
int main()
{
    int a;
    int *p;
    a=5;
    p=&a;
    printf("%d\t%d",a,*p);
    return 0;

}
