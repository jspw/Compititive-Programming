#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[111];
    int i,j,k;
    gets(s1);
    gets(s2);
    i=0,k=0;
    while(s1[i]!='\0')
    {
        i++;
        k++;
    }
    j=0;
    while(s2[j]!=0)
    {
        s1[k+j]=s2[j];
        j++;
    }
    printf("%s\n",s1);
    return 0;

}
