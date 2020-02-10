#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],mx,i,n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
    if (num== a[i])
    {
        printf("Yes");
        break;
    }
    else if (num!=a[i])
    {
        printf("Sorry");
        break;
    }
    }






    getch();
}

