#include<iostream>
using namespace std;
int n,m;
int main()
{  
    while(scanf("%d%d",&n,&m)!=EOF){
        if(m==0)
            printf("1\n");
        else 
        {
            printf("%d\n",min(n-m,m));
        }
    }
    return 0;
}
