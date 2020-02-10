#include<stdio.h>
int main()
{
    int x,n;
    n=0;
    scanf("%d",&x);
    while(x>=5)
        {
            x=x-5;
            n++;
        }
    while(x>=4)
        {
            x=x-4;
            n++;
        }
    while(x>=3)
        {
            x=x-3;
            n++;
        }
    while(x>=2)
        {
            x=x-2;
            n++;
        }
    while(x>=1)
        {
            x=x-1;
            n++;
        }
    printf("%d",n);
    return 0;
    }
