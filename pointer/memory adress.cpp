#include<stdio.h>
int main()
{
    int a=8;
    int *ip;
    ip=&a;
    printf("Memory adress of variable a is :%xn\n",&a);
    printf("Adress stored in ip variable :%xn\n",ip);
    return 0;
}
