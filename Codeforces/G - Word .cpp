#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int i,k,j;
    char s[101];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>'A' && s[i]<'Z')
            j++;
        else if(s[i]>'a' && s[i]<'z')
            k++;
    }
    if (j>k)
        s=toupper(s);
    else
        s=tolower(s);

        printf("%s",s);

    return 0;
}


