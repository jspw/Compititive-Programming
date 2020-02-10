#include<stdio.h>

main()

{
    double a,b,value;
    char sign;
    printf("Enter a : ");
    scanf("%lf",&a);
    printf("Enter b : ");
    scanf("%lf",&b);
    value = a + b ;
    sign = '+';
    printf("%lf %c %lf = %lf\n", a, sign, b, value);
    return 0;

}
