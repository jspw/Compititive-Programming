#include<stdio.h>
int main()
{
    int a,i,j;
    char st[100];
    for(j=1;j<=5;j++){
    scanf("%[^\n]",st);
    for(i=1;i<=10;i++){
    a=a+i;

    printf("1");
    }
    printf("%s %d",st,a);
    }
    return 0;

}
