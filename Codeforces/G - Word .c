#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int i,k=0,j=0;
    char s[120],c[120];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            j++;
        else if(s[i]>='a' && s[i]<='z')
            k++;
    }

    if (j>k)
        printf("%s",strupr(s));
    else
        printf("%s",strlwr(s));

    return 0;
}


