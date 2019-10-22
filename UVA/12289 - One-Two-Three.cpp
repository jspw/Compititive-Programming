# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main()
{
    int n;
    char a[7],chr;
    scanf("%d%c",&n,&chr);
    while(n--)
    {

        gets(a);
        if(strlen(a)==5)
            printf("3\n");
        else if((a[0]=='o' && a[1]=='n')||
                (a[0]=='o' && a[1]=='e')||
                (a[1]=='n' && a[2]=='e')||
                (a[0]=='o' && a[2]=='e')||
                (a[0]=='o' && a[2]=='n'))
            printf("1\n");
        else
            printf("2\n");

    }

    return 0;
}
