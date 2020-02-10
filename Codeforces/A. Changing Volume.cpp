#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        long int c=abs(a-b);

        if(c==0)
            cout<<0<<endl;
        else if(c==1)
            cout<<1<<endl;
        else if(c==2)
            cout<<1<<endl;
        else if(c==3)
            cout<<2<<endl;
        else if(c==4)
            cout<<2<<endl;
        else if(c%5==0)
            cout<<c/5<<endl;

        else{

            long int p= c/5;
            if(c%5==1){
                cout<<p+1<<endl;

            }
            if(c%5==2){
                cout<<p+1<<endl;

            }

            if(c%5==3){
                cout<<p+2<<endl;

            }

            if(c%5==4){
                cout<<p+2<<endl;

            }
        }


    }

    return 0;
}

