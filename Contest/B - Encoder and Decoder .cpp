#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int i,a,x,y,z,n,len;
    char chx ;
    char   str[10000],ch[5];
    while(gets(str))
    {
        n = 0;
        if ( (str[0]>= '0'&& str[0] <='9'))
        {
            len=strlen(str);
            reverse(str,str+len);
            for (i = 0; i<strlen(str); i++)
            {
                n = n * 10 + str[i]-48;
                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c",n);
                    n = 0;
                }
            }
            cout<<endl;
        }


        else
        {

            for(i=strlen(str)-1; i>=0; i--)
            {

                a=str[i];
                if (a<=99)
                {
                    x=a%10;
                    y=a/10;
                    cout<<x<<y;
                }
                else if(a>=100)
                {

                    x=a/100;
                    y=(a-100)/10;
                    z=(a-100)%10;
                    cout<<z<<y<<x;
                }
            }
            cout<<endl;
        }

    }
    return 0;
}
