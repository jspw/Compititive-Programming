#include<stdio.h>
#include<conio.h>
int main()
{
    int   s,i,n,r;

    scanf("%d",&n);

    s=0;
    i=1;
    while (n!=0)
    {
        r=n%2;
        n=n/2;
        s=s+r*i;
        i=i*10;
    }
    printf("%d\n",s);
    getch();
}
