#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int a[1000],n,i,key,left,right,mid;
    cout<<"Enter the number of elements : " ;

    cin>>n;
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    left=0;
    right = n-1;
    while(left<=right)
    {
        mid= (left+right)/2;
        if(a[mid]==key){
            cout<<"Found"<<endl;
            break;
        }
        if(key > a[mid])
            left=mid+1;
        else right = mid -1;

    }
    if(left>right)
        cout<<"Not Found"<<endl;
    return 0;
}
