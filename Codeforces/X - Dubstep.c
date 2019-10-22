#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char st[300],tt[300];
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B'){
            i=i+2;
        }
        else
        {
            tt[j]=st[i];
            j++;
        }
    }
    puts(tt);
    return 0;

}
