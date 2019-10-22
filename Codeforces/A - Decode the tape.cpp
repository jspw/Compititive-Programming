#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    char p;
    gets(s);
    while(gets(s))
    {
        if(strcmp(s,"___________")==0)
            break;
        p = 0;
        if( s[9] == 'o' )
            p = p + 1;
        if( s[8] == 'o' )
            p = p + 2;
        if( s[7] == 'o' )
            p = p + 4;
        if( s[5] == 'o' )
            p = p + 8;
        if( s[4] == 'o' )
            p = p + 16;
        if( s[3] == 'o' )
            p = p + 32;
        if( s[2] == 'o' )
            p = p + 64;
        if( s[1] == 'o' )
            p = p + 128;
        printf("%c", p);
    }
    return 0;
}
