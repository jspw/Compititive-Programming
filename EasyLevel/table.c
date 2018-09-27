#include<stdio.h>
main()
{
    int x,y,table;
    y=1;

    printf("enter a value of x:", x);
    scanf("%d", &x);

    while(y<=10) {
        y=y+1;
        printf("%d * %d = %d\n", x ,y ,x*y);

    }
    return 0;


}
