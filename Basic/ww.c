#include<stdio.h>
main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    if (n<0) {
        printf("The number is negative");
    }
    else if (n>0){
        printf("The number is positive");
    }
    else if (n==0) {
        printf("The number is Zero");
    }
    return 0;

}
