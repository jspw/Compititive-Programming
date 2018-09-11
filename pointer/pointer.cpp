#include<cstdio>
#include<iostream>
using namespace std;
int main ()
{
    int x=1,y=2;
    int *p,*q;
    p=&x;
    q=&y;
    x=5;
    y=9;
    cout<<x<<*p<<y<<*q<<endl;
    //*p=*q;
    p=q;
    cout<<x<<*p<<y<<*q<<endl;

    return 0;

}
