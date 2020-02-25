/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Sort array in discending order (n to 1)
bool decSort(ll a, ll b)
{
    return a > b;
}

//find the maximum element of a array
ll max_of_array(ll a[], ll n)
{
    ll mx = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

//find the minimum element of a array
ll min_of_array(ll a[], ll n)
{
    ll mn = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }
    return mn;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);

    bool at = false;
    int pos = 0;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == '@')
        {
            pos = i;
            at = true;
            break;
        }
    }

    if (at)
    {
        bool cond1 = false;

        if (isalpha(str[0]))
            cond1 = true;

        if (!cond1)
            cout << "Invalid" << endl;
        else
        {
            bool cond2 = true;

            for (int i = 0; i < pos; i++)
            {
                if (!isalnum(str[i]))
                {
                    cond2 = false;
                    break;
                }
            }

            if (!cond2)
                cout << "Invalid" << endl;
            else
            {
                bool dot = false;
                int pos2;
                for (int i = pos + 1; i < str.size(); i++)
                {
                    if (str[i] == '.')
                    {
                        pos2 = i;
                        dot = true;
                        break;
                    }
                }

                if (!dot)
                    cout << "Invalid" << endl;
                else
                {
                    bool cond3 = true;
                    for (int i = pos + 1; i < pos2; i++)
                    {
                        if (!isalnum(str[i]))
                        {
                            cond3 = false;
                            break;
                        }
                    }

                    if (!cond3)
                        cout << "Invalid" << endl;
                    else
                    {

                        bool extra = false;
                        int pos3;
                        for (int i = pos2 + 1; i < str.size(); i++)
                        {
                            if (str[i] == '.')
                            {
                                extra = true;
                                pos3 = i;
                                break;
                            }
                        }

                        if (extra)
                        {
                            bool condx = true;

                            for (int i = pos2 + 1; i < pos3; i++)
                            {
                                if (!isalnum(str[i]))
                                {
                                    condx = false;
                                    break;
                                }
                            }

                            if (condx)
                            {

                                if (str.size() - pos3 > 4 || str.size() - pos3<=2)
                                    cout << "Invalid" << endl;
                                else
                                {

                                    bool cond5 = true;

                                    for (int i = pos3 + 1; i < str.size(); i++)
                                    {
                                        if (!isalpha(str[i]))
                                        {
                                            cond5 = false;
                                            break;
                                        }
                                    }

                                    if (cond5)
                                        cout << "Valid" << endl;
                                    else
                                        cout << "Invalid" << endl;
                                }
                            }
                            else
                                cout << "Invalid" << endl;
                        }
                        else
                        {

                            if (str.size() - pos2 > 4 ||str.size() - pos2 <=2 )  
                                cout << "Invalid" << endl;
                            else
                            {

                                bool cond4 = true;

                                for (int i = pos2 + 1; i < str.size(); i++)
                                {
                                    if (!isalpha(str[i]))
                                    {
                                        cond4 = false;
                                        break;
                                    }
                                }

                                if (cond4)
                                    cout << "Valid" << endl;
                                else
                                    cout << "Invalid" << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    else
        cout << "Invalid" << endl;

    return 0;
}