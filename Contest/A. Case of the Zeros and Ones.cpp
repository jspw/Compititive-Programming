#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,i,y,p;
    char a;
    vector <char> l;
    vector <char> :: iterator it;
    cin>>n;
    for(i=0; i<n; i++)
    {
        // cout<<"ENter a : ";
        cin>>a;
        l.push_back(a);
    }
    for(it=l.begin(); it!=l.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    y=l.size();
    for(j=i;p!=0; j++)
        p=0;
    {
        for(i=0; i<y; i++)
        {
            if(l[i]=='0' && l[i+1]=='1')
            {
                cout<<"i = "<<i<<endl;
                l.erase(l.begin()+i);
                l.erase(l.begin()+i+1);
                i++;
                p++;
                cout<<"p = "<<p<<" i = "<<i<<endl;

            }
            else if(l[i]=='1' && l[i+1]=='0')
            {
                cout<<"i = "<<i<<endl;
                l.erase(l.begin()+i);
                l.erase(l.begin()+i+1);
                i++;
                p++;
                cout<<"p = "<<p<<" i = "<<i<<endl;
            }
        }
    }

    cout<<l.size()<<endl;
    return 0;
}
