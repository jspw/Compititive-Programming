#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],mx,i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    mx = a[0];
    for (i=1;i<n;i++)
    {
        if(mx<a[i])
            mx=a[i];
    }
    printf("%d\n",mx);

    getch();
}
