#include<stdio.h>
main()
{
    int a,w,d,n;
    char choice ;
    printf("Enter your initial balance: ");
    scanf("%d",&a);
    printf("Enter Your choice w/d:");
    scanf(" %c",&choice);
    if(choice=='w')
    {
        printf("Enter your widrow amount:");
        scanf("%d",&w);
        n=a-w;
        printf("Your main account balance is : %d",n);
    }
    else if (choice=='d')
    {
        printf("Enter your deposite amount:");
        scanf("%d",&d);
        n=a-d;
        printf("Your main account balance is : %d",n);
    }
    return 0;
}
