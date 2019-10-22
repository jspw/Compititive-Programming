#include <stdio.h>
#include <stdlib.h>
void fs(int first,int second,int term);
int main()

{
fs(0,1,25);
return 0;


}
void fs(int first,int sec,int term)
{
   int num;
   if(term==0)

    return;
    num=first+sec;
    first=sec;
    sec=num;
    printf("%d ",num);
    fs(first,sec,term-1);
}
