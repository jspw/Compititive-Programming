#include<stdio.h>
main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    if (n>=33 && n<=100) {
        printf("Congratulation you have passed");
    }
    else {
        printf("Sorry, You are failed");
    }
    return 0;
}
