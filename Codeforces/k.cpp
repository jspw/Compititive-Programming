#include<stdio.h>
 main()
{
    long long  int a,b,sum,c;
    while(scanf("%d%d",&a,&b) != EOF)
    {


        if (a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        sum=a-b;
        printf("%ll\n",sum);

    }
    return 0;
}
