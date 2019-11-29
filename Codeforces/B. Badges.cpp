#include <stdio.h>
int main()
{
    int p=0,a,b,n,i,x;

    scanf("%d%d%d",&a,&b,&n);
    if(a>b){
        for( i=a;i>=0;i--){
                x=n-i;
            if(x<=b && x>=0) p++;
            if(x>b) break;

        }

        printf("%d\n",p);
    }
    else {
        for( i=b;i>=0;i--){
                 x=n-i;
            if(x<=a && x>=0) p++;
            if(x>a) break;

        }

        printf("%d\n",p);
    }

    return 0;
}
