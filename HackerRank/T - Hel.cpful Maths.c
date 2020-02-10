#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char temp ,s[101];
    gets(s);
    for(i=0;s[i]!='\0';i=i+2)
    {
         for (j=0;s[j]!='\0'; j=j+2)
        {
            if (s[j]>s[j+2])
            {
                temp = s[j];
                s[j]=s[j+2];
                s[j+2]=temp;

            }

        }

    }
    printf("%s",s);

    return 0;
}
