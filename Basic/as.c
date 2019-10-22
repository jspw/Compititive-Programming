#include<stdio.h>
int main()
{
    int ara [10] = {100,90,80,70,60,50,40,30,20,10};
    int i;
    for(i=0;i<10;i++) {
        printf("%d th element is : %d\n", i+1, ara[i]);
    }
    return 0;
}
