#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a == 0)
                zero++;
            else
            {
                sum = sum + a;
            }
        }

        zero+sum == 0 ? cout<<zero+1<<endl : cout<<zero<<endl;
    }
}