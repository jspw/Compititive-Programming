#include<stdio.h>
main()
{
    int a,b,add,min,mul,div;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    add = a + b ;
    printf("Add = %d\n", add);
    min = a - b ;
    printf("Min = %d\n", min);
    mul = a * b ;
    printf("Mul = %d\n", mul);
    div = a / b ;
    printf("Div = %d", div);
    return 0;


}
