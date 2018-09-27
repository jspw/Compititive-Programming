#include<stdio.h>

int main()

{
    int a, b, c ;

    printf("Enter a , b , c\n");
    scanf("%d\t %d\t %d", &a, &b, &c);
    (a>b) && (b>c) ? printf("%d is the bigest",a) : (a<b) && (a>c) ? printf("%d is the bigest",b) : printf("%d is the biggest",c);
    return 0;

}
