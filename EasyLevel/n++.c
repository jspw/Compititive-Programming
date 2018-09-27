#include<stdio.h>

main()

{
    int n;
    printf("Enter a number :", n);
    scanf("%d", &n);

    while (n<=50) {
        n++;






        if (n%2==0) {
            continue;
    }

        printf("%d\n", n);

    }
    return 0;

}
