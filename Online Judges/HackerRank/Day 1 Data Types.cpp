#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j, sum;
    double f,bum;
    char b[100];
    scanf("%d %lf",&j,&f);
    gets(b);
    gets(b);
    sum=i+j;
    bum=d+f;
    strcat(s,b);
    printf("%d\n",sum);
    printf("%.1lf\n",bum);
    printf("%s\n",s);
    return 0;
}
