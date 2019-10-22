#include<stdio.h>
void add(int a ,int b, int c)
{
    int ara[10];
    int y,sum,i, x;
    if(a+b+c!=0)
    {

         x=a%10;
         y=b%10;
        sum=(x+y+c);
        add(a/10,b/10,sum/10);
        printf("%d",sum%10);



    }

}
int main()
{
    int a=132,b=189,c=56;
    add(a,b,c);
}
