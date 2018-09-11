#include <stdio.h>
int main()
{
    int n, a, b, c, d;
    scanf("%d%d%d", &n, &a, &b);
    c = n-a-1;
    if(c > b)
    {
        d = b+1;
    }
    else
    {
        d = c+1;
    }
    printf("%d", d);
    return 0;
}
