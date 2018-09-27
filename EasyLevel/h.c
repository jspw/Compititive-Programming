#include<stdio.h>

main()

{

    double a, b, sum, min, mul, div,eqtn;
    printf(" Enter the value of a :");
    scanf(" %lf", &a);
    printf(" Enter the value of b :");
    scanf(" %lf", &b);
    sum = a + b;
    min = a - b;
    mul = a * b;
    div = a / b;
    eqtn = (2*a+3*b)-a*b;
    printf("eqtn is : %lf\n", eqtn);
    printf(" Sum is : %lf\n", sum);
    printf(" min is : %lf\n", min);
    printf(" mul is : %lf\n", mul);
    printf(" div is : %lf\n", div);
    return 0;

}


