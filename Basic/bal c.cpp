#include<stdio.h>
int main()
{
    int a=10;
    printf("%d %d\n",a,a++);
    a=10;
    printf("%d %d\n",a++,a);
    a=10;
    printf("%d %d\n",a,++a);
    a=10;

    printf("%d %d\n",++a,a);
    a=10;
    printf("%d %d %d\n",a,a++,++a);
    return 0;
}
