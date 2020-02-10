#include<stdio.h>

main()

{
    int n;
    printf("Enter a value of n :", n);
    scanf("%d", &n);
    while (n<=100) {
        printf("%d\n",n);

        n++;
    }

    return 0;

}
