#include <stdio.h>
#include <string.h>

int main() {

    int j, i,n,T;
    char s[10000];
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
        scanf("%s",s);

        i=0;
        while(s[i]!='\0')
        {

            if(i%2==0)
                printf("%c",s[i]);
            i++;
        }
        printf(" ");
                i=0;

        while(s[i]!='\0')
        {

             if (i%2!=0)
                printf("%c",s[i]);
            i++;
        }




        printf("\n");
    }



    return 0;
}

