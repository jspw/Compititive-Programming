#include<bits/stdc++.h>
using namespace std;

int main()
{
    char alf[26], text[201];
    int freq[26],t,a, i, j, mx=0;
    for(i=0; i<26; i++)
    {
        alf[i]='a'+i;
    }
    while(scanf("%d ", &t)==1)
    {
        for(i=0; i<t; i++)
        {
            gets(text);
            for(a=0; a<26; a++)
                freq[a]=0;
            for(j=0;j<strlen(text); j++ )
            {   text[j]=tolower(text[j]);
                for(a=0; a<26; a++)
                {
                    if(text[j]==alf[a])
                        freq[a]+=1;
                }
            }
            for(a=0, mx=0; a<26; a++)
            {
                if(freq[a]>mx)
                    mx=freq[a];
            }
            for(a=0; a<26; a++)
            {
                if(freq[a]==mx)
                    printf("%c", alf[a]);
            }
            printf("\n");
        }
    }
}
