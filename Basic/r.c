#include<stdio.h>

int main ()

{
    int ara[50], i,n,key,loc,ck;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("&d",&ara[i]);
    }
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
       if(key==1) {
        loc=i+1;
        printf("yes,loc %d",loc);
        break;
       }
       else
        printf("NO");
    }
    return 0;
}
