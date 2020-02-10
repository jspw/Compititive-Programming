#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,p1,p2,q1,q2;
    cin>>n;
    while(i<n)
    {
        cin>>p1>>p2>>q1>>q2;
        cout<<q1+(q1-p1)<<" "<<q2+(q2-p2)<<endl;
        i++;
    }
    return 0;

}
