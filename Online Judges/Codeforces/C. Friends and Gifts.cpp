#include <bits/stdc++.h>
using namespace std;

int i, n, a[200005], f[200005];

vector<int> v, p;

int main()
{

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]] = 1;
        if (a[i] == 0)
            v.push_back(i);
    }

    for (i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            p.push_back(i);
        }
    }

    for (i = 0; i < v.size() - 1; i++)
    {
        if (p[i] == v[i] || p[i + 1] == v[i + 1])
        {
            swap(p[i], p[i + 1]);
        }
        a[v[i]] = p[i];
    }

    a[v[v.size() - 1]] = p[p.size() - 1];

    for (i = 1; i <= n; i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}