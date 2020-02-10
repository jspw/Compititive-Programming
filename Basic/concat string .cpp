#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
   char s3[100] = " ";
    gets(s1);
    gets(s2);
    strcat(s1,s3);
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0;
}
