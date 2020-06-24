#include<bits/stdc++.h>
using namespace std;

int mx(int x, int y)
{
    if(x>y)
        return y;
    else return x;
}

int main()
{
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;

    int m=str1.size();

    int n = str2.size();

    int tab[m+1][n+1];


    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 && j==0)
                tab[i][j]=0;
            else if(i==0)
                tab[i][j]=tab[i][j-1]+1;
            else if(j==0)
                tab[i][j]=tab[i-1][j]+1;

            else
            {

                if(str1[i-1]==str2[j-1])
                 tab[i][j]=tab[i-1][j-1];
                 else
                        tab[i][j] = 1 + mx(tab[i][j-1],mx(tab[i-1][j],tab[i-1][j-1]));
            }

        }


    }

    for(int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
            cout<<tab[i][j]<<" ";
        cout<<endl;
    }


    cout<<tab[m][n]<<endl;

    return 0;

}
