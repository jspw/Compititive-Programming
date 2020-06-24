#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int  main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&c);
        a=rand()%10;
        b%10=c-a;
        printf("%d %d\n",abs(a),abs(b));
    }
    return 0;
}
