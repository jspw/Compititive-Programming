#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string str;
        cin >> str;

        if (str[str.size()-1] == 'o')
        {
            cout << "FILIPINO" << endl;
        }else if(str[str.size()-1] == 'u')
            cout << "JAPANESE" << endl;
        else cout << "KOREAN" << endl;
    }

    return 0;
}