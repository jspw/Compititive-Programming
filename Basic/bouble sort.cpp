#include<bits/stdc++.h>
using namespace std;
int main()
{

    int j,p=0,q=0,temp,i,a[100]= {32,51,27,85,66,23,13,57};

    for(j=0; j<8; j++)
    {

        for(i=0; i<7;i++)
        {
            q++;
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                p++;
            }
        }
    }

    cout<<"Number of compares = "<<q<<endl;

    cout<<"Number of swaps = "<<p<<endl;

    cout<<"The sorted array is given below"<<endl;

    for(i=0;i<8;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
