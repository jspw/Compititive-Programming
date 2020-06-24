#include<bits/stdc++.h>
using namespace std;


void Swap(int *a, int *b);
void SelectionSort(int a,int n);
void printArray(int a[],int n);

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int a[],int n)
{
    int i,j,ind;
    for(i=0;i<n;i++)
    {
        ind = i;
        for(j=i+1;j<n;j++)
            if(a [j] < a [ind])
            ind = j;
        Swap(&a[ind],&a[i]);
    }
}

void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int n,i,a[1000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    SelectionSort(a,n);
    printArray(a,n);
    return 0;
}
