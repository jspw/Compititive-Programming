#include<stdio.h>

int main()

{
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if ( a > b ) {
        if ( a > c )
            printf("%d",a);
        else
            printf("%c",c);
    }
    else {
        if( b > c )
            printf("%d",b);
        else
            printf("%d",c);
    }
    return 0;
}
