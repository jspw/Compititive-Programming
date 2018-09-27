#include<stdio.h>

int main()

{
    int check,i,a;
    while (scanf("%d",&a) != EOF)
    {

    check=1;
    for(i=2;i<a;i++)
    {
        if (a%i==0)
            check=0;
    }

    if (check==1)
    {
        printf("Prime\n");
    }
    else
        printf("Not Prime\n");
    }
    return 0;
}
