#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int i,n,m,j,k=0;
    scanf("%d%d",&n,&m);
    for(j=0; j<=max(n,m); j++)
    {
        for(i=0; i<=max(n,m); i++)
        {

            if(((i*i)+j==n) && (i+(j*j)==m))
                k++;
        }
    }
    printf("%d",k);
    return 0;
}
