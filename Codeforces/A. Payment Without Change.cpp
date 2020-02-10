#include <stdio.h>

int main()
{
    long long q, a, b, n, s;
    scanf("%lld",&q);
    while (q--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&n,&s);
        if (a * n >= s)
        {
            if (s % n <= b)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if (s - n * a <= b)
                printf("YES\n");
            else
                 printf("NO\n");
        }
    }
    return 0;
}
