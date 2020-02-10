#include<stdio.h>
#include<conio.h>
int main()
{
    int C;
    float F;
    while (scanf("%d",&C)!=EOF)
    {
        F=9/5*C + 32;
        printf("%f\n",F);
    }
    getch();
    return 0;
}
