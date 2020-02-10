#include<bits/stdc++.h>
using namespace std;
int main()

{
    int i;
    int a[10] = { 9, 6,3,7,1,11,2,8,0,4};
    int b[8] = {94,67,33,72,14,11,28,04};
    cout<<"a"<<endl;
    for(i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(&a[0],&a[10]); //sorting array !! addresh by &
    for(i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"b"<<endl;
    for(i=0; i<8; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    sort(b,b+8); //sorting array !! addresh by &
    for(i=0; i<8; i++)
    {
        cout<<b[i]<<" ";
    }

}
