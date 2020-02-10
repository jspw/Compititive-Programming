#include<stdio.h>

int main()

{
    int ara[10],n,i,j=1,key;

    while(scanf("%d",&n)!=EOF)

    {

        for ( i=0;i<n;i++)

        {
            scanf("%d",&ara[i]);

        }

        scanf("%d",&key);

        for(i=0;i<n;i++)

        {
            if(ara[i]==key)

            {

                break;

            }
        }

        printf("Case %d: ",j);

        j++;

        if(i==n)

            printf("No\n");

        else

            printf("%d\n",i+1);

    }

    return 0;

}

