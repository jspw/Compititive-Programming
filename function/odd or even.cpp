#include<stdio.h>
void even_odd (int n)
{
    if(n%2==0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");

}

int main()
{
    int n;
    printf("Enter a  number: ");
    while(scanf("%d",&n)!= EOF)
    {
        if(n==0)
            printf("Its Zero\n");
    even_odd(n);
    printf("Enter a number: ");
    }
    return 0;
}

