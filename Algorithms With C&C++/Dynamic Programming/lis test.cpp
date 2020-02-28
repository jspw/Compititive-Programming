#include<bits/stdc++.h>
using namespace std;

int Max (int a,int b)
{
    return a>b ? a : b;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];

    int lis[n];

    for(int i=0; i<n; i++)
        lis[i]=1;


    for(int i=1; i<n; i++)
    {
        //        cout<<"a"<<endl;
        for(int j=0; j<i; j++)
        {
            //        cout<<"b"<<endl;
            if(ar[j]<ar[i])
            {
                lis[i] = max(lis[i],lis[j]+1);
                //       cout<<"c"<<endl;
            }
        }

    }

    cout<<"The lis : ";
    for(int i=0; i<n; i++)
        cout<<lis[i]<<" ";
    cout<<endl;
    int mx = -1;
    for(int i=0; i<n; i++)
        mx = Max(lis[i],mx);
    cout<<"Longest increasing subsequence : " <<mx<<endl;


    //backtracking

    int p=0;



    for(int i=n-1; i>=0; i--)
        if(lis[i]==mx)
        {
            p=i;
            break;
        }
    for(int i=p; i>=0; i--)
    {
        if(i==p)
            cout<<ar[i]<<" ";
        if(lis[i]==mx-1)
        {
            cout<<ar[i]<<" ";
            mx--;
        }

        if(mx==0)
            break;
    }

    cout<<endl;

}
