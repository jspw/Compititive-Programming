#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y1,y2,i,x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v1<v2)
    cout<<"NO"<<endl;
    else
    {
        for(i=1;;i++)
        {
            y1=x1+(v1*i);
            y2=x2+(v2*i);
            if(y1==y2)
            {
                cout<<"YES"<<endl;
                return 0;
            }

            else if(x1<x2 && y1>y2 )
            {
                cout<<"NO"<<endl;
                return 0;
            }

            else if(x2<x1 && y2>y1 )
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
}
