#include<stdio.h>
int a=500000;

int  binq (int a)
{
    return a;
}
int  dpst (int b)
{
    int a,d;
    printf("Enter the amount you want to Deposite: ");
    scanf("%d",&b);
    d=a+b;
    return d;
}
int widrw (int c)
{
    int b,e;
    printf("Enter the amount you want to Widrow: ");
    scanf("%d",&c);
    return e=b-c;
}
int main()
{

    int b,c,n,o,d,e;
    printf("What do u want to do ,Sir?\nYour choices are below :\n1)Inquiry?\n2)Deposite?\n3)Widrow?\nplease enter your choice:");

    while(scanf("%d",&o) != EOF)
    {
        if(o==1)
            {
            binq(a);
            printf("Your account balance is %d\n",a);
            }

        else if(o==2)
        {
            dpst(b);
            printf("Your account balance is %d\n",d);
            b=d;


        }
        else if(o==3)
        {
            widrw(c);
            printf("Your account balance is %d\n",e);
            c=e;
        }

        printf("Do u want to do something else ,Sir?\nYour choices are below :\n1)Inquiry?\n2)Deposite?\n3)Widrow?\nplease enter your choice:");
    }
    return 0;
}
