#include<stdio.h>

main()

{
    double n;
    printf("Enter a number : ");
    scanf("%lf", &n);
    if ( n>=1 || n<=10) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;

}
