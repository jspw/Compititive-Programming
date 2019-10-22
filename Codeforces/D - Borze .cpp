#include<stdio.h>
int main()
{
    int i;
    char a[201];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='-' && a[i+1]=='-')
        {
            printf("2");
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(a[i]=='.')
        {
            printf("0");
        }

    }
    return 0;
}
