#include<iostream>
using namespace std;
int main()
{
    long long q;
    scanf("%lld",&q);
    while(q--)
    {
        long long n,k;

        scanf("%lld%lld",&n,&k);
        char s[n+1];
        scanf("%s",s);
        long long p=0,l=0;
        for(long long i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(i-p<k)
                    l=i-p;
                else l=k;
                swap(s[i],s[i-l]);
                p++;
                k-=l;
            }

            if(k<1)
                break;
        }
        printf("%s\n",s);
    }
}
