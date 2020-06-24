#include <iostream>
using namespace std;
int a[3000], i, j, k, n;
int main()
{
    
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if (a[i] == 0)
            for (j = i; j <= n; j += i)
                a[j]++;
        if (a[i] == 2)
            k++;
    }
    cout << k;
}