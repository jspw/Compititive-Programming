#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,mx=-1,mxl;
    char text[10001],stop[]="E-N-D",cp[10001]= {};
    while(scanf("%s",&text) && strcmp(text,stop))
    {
        mxl=0;
        for(int i=0; i<strlen(text); i++)
        {
            if(text[i]>= 'a' &&text[i]<='z'||text[i]>='A' &&text[i]<='Z'||text[i]=='-')
            {
                mxl++;
            }
        }
        if ( mx < mxl )
            {
                mx = mxl;
                strcpy(cp, text);
            }
    }

    for(i=0;i<strlen(cp);i++)
    {
        if(cp[i]>= 'a' && cp[i]<='z'|| cp[i]>='A' && cp[i]<='Z'|| cp[i]=='-')
            {
                printf ("%c", tolower(cp [i]));
            }
    }
    cout<<endl;
}
