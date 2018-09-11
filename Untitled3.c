#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define M(a) memset(a,0,sizeof(a))
int main()
{
    int a,b,c;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        if(a<1||b<2||c<4)
        {
            printf("0\n");
            continue;
        }
        for(int i=1;i;i++)
        {
            if(i>a||2*i>b||i*4>c)
            {
                printf("%d\n",(i-1)+2*(i-1)+4*(i-1));
                break;
            }
        }
    }
    return 0;
}
