#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100]={1,2,4,5,6,7},i,j,value;

    scanf("%d",&value);

    for (j=0;j<=7;j++)
    {
        if(a[j]==value){
            printf("Yes at %d\n",j+1);
            break;}
        else {printf("No\n");
        break;}
    }

    getch();
    return 0;
}
