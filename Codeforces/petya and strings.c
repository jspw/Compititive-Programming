#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char a[101],b[101];
    gets(a);
    gets(b);

    for(i=0;a[i]!='\0';i++)
        a[i]=tolower(a[i]);
    for(i=0;b[i]!='\0';i++)
        b[i]=tolower(b[i]);
    puts(a);
    puts(b);
    if(strcmp(a,b)==0)
        printf("0");
    else if(strcmp(a,b)>0)
        printf("1");
     else if(strcmp(a,b)<0)
        printf("-1");


    return 0;
}

