#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
int main()
{
    long long int p,i,n,a,y;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        y=sqrt(a);
        p=0;

        if(a!=1 && y*y==a)
        {
           // cout<<"A"<<endl;
            for(i=2; i*i<=y; i++)
            {
                if(y%i==0){
                    p++;
                 //   cout<<y<<endl;
                }
            }
            if(p==0){
                cout<<"YES"<<endl;
             //   cout<<"b"<<endl;
            }
            else {
                cout<<"NO"<<endl;
               // cout<<"A"<<endl;
            }
        }
        else cout<<"NO"<<endl;
        n--;
    }


    return 0;
}
