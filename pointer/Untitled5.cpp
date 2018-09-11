#include<stdio.h>
int main()
{
    int x[10]={10,-2,11,13,2,100,12,61,26,15};
    sort(x);
    for(i=0;i<10;i++)
        printf("%d",x[i]);
    return 0;
}

