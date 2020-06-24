#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        // cout << str << endl;
        int f = 0, l = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                f = i;
                break;
            }
        }

        // cout << "first : " << f << endl;

        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                l = i;
                break;
            }
        }

        // cout << "first : " << f << endl;

        int count = 0;

        if (f != l)
        {
            for (int i = f; i <= l; i++)
            {
                if (str[i] == '0')
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}