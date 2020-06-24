
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( string X,string Y, int m, int n )
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
        if (i == 0 || j == 0)
            L[i][j] = 0;

        else if (X[i - 1] == Y[j - 1])
            L[i][j] = L[i - 1][j - 1] + 1;

        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }


    return L[m][n];
}


int max(int a, int b)
{
    return (a > b)? a : b;
}

int main()
{
    while(1)
    {
        string str1,str2;
        cin>>str1;
        if(str1=="#")
            break;
        cin>>str2;
        int x = lcs(str1,str2,str1.size(),str2.size());

 //       cout<<x<<endl;

        cout<<(str1.size()-x)*15 + (str2.size()-x)*30<<endl;
    }

    return 0;
}
