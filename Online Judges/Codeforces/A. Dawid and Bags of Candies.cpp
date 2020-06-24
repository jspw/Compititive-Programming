#include<bits/stdc++.h>

int main()
{
    int a[4];
    scanf("%d%d%d%d",a,a+1,a+2,a+3);
    std::sort(a,a+4);
    puts(abs(a[1]+a[2]-a[3])==a[0]?"YES":"NO");
}
