#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char s[1000];
    gets(s);
    if(s[0]>='a' && s[0]<='z')
        s[0]=toupper(s[0]);
    puts(s);
    return 0;

}

