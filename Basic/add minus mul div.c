#include<stdio.h>

main()

{
    double a,b,sum,add,mul,div;
    printf("Please enter the value of a:");
    scanf("%lf", &a);
    printf("Please enter the value of b:");
    scanf("%lf", &b);
    sum = a + b;
    add = a - b;
    mul = a * b;
    div = a / b;
    printf(" sum is : %lf\n", sum);
    printf(" add is : %lf\n", add);
    printf(" mul is : %lf\n", mul);
    printf(" div is : %lf\n", div);
    return 0;
}
