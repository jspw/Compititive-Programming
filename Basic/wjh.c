#include<stdio.h>
main()
{
    int n;
    printf("Enter the number of n:");
    scanf("%d", &n);
    if(n%2==0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
    return 0;

}
