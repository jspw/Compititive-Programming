#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--)

    {

        int n;

        cin >> n;

        int a[n + 1];

        for (int i = 0; i < n; i++)

            cin >> a[i];

        bool bal = false;

        for (int i = 0; i < n; i++)

        {
            for (int k = 0; k < n; k++)

            {
                if (abs(a[i] - a[k]) % 2 != 0)

                {

                    bal = true;

                    break;

                }
            }
        }

        if (bal)

            cout << "NO" << endl;

        else

            cout << "YES" << endl;

    }

    return 0;
}