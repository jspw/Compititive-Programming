
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l1,l2;
    char s1[1000],s2[1000],ends[10]="E-N-D",text[1000]="";
    while(scanf("%[A-Za-z]",&s1) && scanf("%[a-zA-Z]",&s2) )
    {
          if(strcmp(s1,ends) )
            break;
        else if(strcmp(s1,ends) )
            break;

        l1=strlen(s1);
        l2=strlen(s2);
        if(l1>l2)
        {
            strcpy(text,s1);
        }
        else
            strcpy(text,s2);


    }
    printf("%s",text);
    return 0;
}
