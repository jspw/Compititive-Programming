#include<stdio.h>

main()

{
    int n;
    printf("Please enter a number :");
    scanf("%d",&n);
    if (n<0) {
        printf("The number is negative\n");
    }
    else {
        printf("The number is positive\n");
    }
    return 0;
}
