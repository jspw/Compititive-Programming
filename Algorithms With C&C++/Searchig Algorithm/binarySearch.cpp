#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ary[],int start,int end,int key){
    if(start<=end){
        int mid = (start+end)/2;

        if(ary[mid]==key) return mid;
        
        if(key < ary [mid] )  
            return binarySearch (ary,start,mid-1,key);

        if(key>ary[mid])
            return binarySearch (ary,mid+1,end,key);

    }

    return -1;


}

int main(){

    int n,key;
    cout<<"Enter array size : "<<endl;
    cin>>n;
    int ary[n];
    cout<<"Enter array accending ordered: ";
    for(int i=0;i<n;i++){
        cin>>ary[i];
    }

    cout<<"Array is : ";

    for(int i=0;i<n;i++){
        cout<<ary[i];
        cout<<" ";
    }
    cout<<endl;

    cout<<"Enter key : ";

    cin>>key;

    int result = binarySearch(ary,0,n-1,key);

    if(result == -1){
        cout<<"Key Not Found"<<endl;
    }

    else cout<<"Key found at " ;
    cout<<result+1<<endl;

    return 0;
}