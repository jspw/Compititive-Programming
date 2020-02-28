#include<bits/stdc++.h>
using namespace std ;

void PrintArray (int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void InsertionSort (int a[],int n)
{

}

int main()
{
    int n,a[1000],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    InsertionSort(a,n);
    PrintArray(a,n);
    return 0;
}
