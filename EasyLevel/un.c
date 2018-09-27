#include<stdio.h>

int main()

{
    int a,b,sum,n;

    printf("How many times do you want to run the peogramme ? ");

    scanf("%d",&n);

    while (n--)

    {

        printf("Enter value of a & b :");

        scanf("%d%d", &a, &b)  ;



        sum = a + b ;

        printf("%d + %d = %d\n", a, b, sum);


    }

    return 0;

}
