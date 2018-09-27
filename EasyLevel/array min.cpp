#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,maxi,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        maxi=a[0];

        for( i=1;i<n;i++)
        {
            if(maxi>a[i]){
                maxi = a[i];}
        }
        printf("%d\n",maxi);



    getch();
    return 0;
}
