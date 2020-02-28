#include<iostream>
using namespace std ;
void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int i,j,a[1000],n,min_i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n-1;i++)
    {
        min_i = i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_i]){
                min_i = j;
            }
        }

        Swap(&a[min_i],&a[i]);
    }
    printArray(a,n);
    return 0;

}
