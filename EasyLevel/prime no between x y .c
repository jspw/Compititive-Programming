#include<stdio.h>
int main()
{
    int x,y,n,i,a,check,sum;
    x=1;
    y=10;
    sum=0;

    for (a=x;a<=y;a++)
    {
        check = 1;
    if (a==1)
        check=0;

        for(i=2;i<a;i++)
        {
            if ( a%i==0)
            {
                check = 0;
            }
        }

        if ( check == 1 )
        {
            sum=sum+a;
        }

    }
    printf("%d ",sum);

    return 0;
}
