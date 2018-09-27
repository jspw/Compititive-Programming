#include<stdio.h>

main()

{
    int n;
    printf("Enter a number :", n);
    scanf("%d", &n);
    n++;
    while (n<=100); {
        printf("%d",n);
        n++;
    }
    return 0;

}
