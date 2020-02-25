#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> vn;
    vector<string> vm;
    vn.push_back("Shifat");
    vm.push_back("Shifat");
    for (int i = 1; i <= n; i++)
    {
        string str1;
        cin >> str1;
        vn.push_back(str1);
    }
    for (int i = 1; i <= m; i++)
    {
        string str1;
        cin >> str1;
        vm.push_back(str1);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll y;
        cin >> y;
        if (y % n == 0 && y % m == 0)
        {
            cout << vn[n] << vm[m] << endl;
        }
        else
        {
            if (y % m == 0)
                cout << vn[y % n] << vm[m] << endl;
            else if (y % n == 0)
                cout << vn[n] << vm[y % m] << endl;
            else
            {
                cout << vn[y % n] << vm[y % m] << endl;
            }
        }
    }

    return 0;
}