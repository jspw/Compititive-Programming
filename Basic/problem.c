#include<stdio.h>

int main()

{
  int a,b;

  scanf("%d\n %d",&a,&b) ;

  (a>b) ? printf("A is greater than B") : (a==b) ? printf("A=B") : printf("A is smaller than B") ;


  return 0;
}

