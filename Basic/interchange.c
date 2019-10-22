#include<stdio.h>
int main()
{
    int a, b;
    a=5;
    b=6;
    printf("Before interchange: %d %d\n",a,b);
    a=b;
    b=a;
    printf("After interchange: %d %d\n",a,b);
    return 0;
}
