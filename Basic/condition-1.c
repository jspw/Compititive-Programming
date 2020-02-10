#include<stdio.h>

int main()

{
    int n,reminder;

    printf("Enter a value of a :");

    scanf("%d",&n);

    reminder=n%2;

    (reminder==0) ? printf("This is a Even number") : printf("This is a odd number") ;

    return 0;
}
