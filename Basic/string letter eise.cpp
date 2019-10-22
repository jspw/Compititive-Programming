#include<stdio.h>
int main()
{
    char s1[100];
    int i;
    gets(s1);
    i=0;
    while(s1[i]!='\0'){
        printf("%c\n",s1[i]);
        i++;
}
    return 0;
}
