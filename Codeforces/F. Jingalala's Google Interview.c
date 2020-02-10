#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int p=0,i;
  char s[]="Competitive programming is a mind sport usually held over the Internet or a local network, involving participants trying to program according to provided specifications. Contestants are referred to as sports programmers. Competitive programming is recognized and supported by several multinational software and Internet companies, such as Google, and Facebook. There are several organizations who host programming competitions on a regular basis. ";
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]=='a')
    p++;
  }
  cout<<p<<endl;
  return 0;
}

