#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0,i,j,x,y;
    char s[1000];
    vector <int > v;
    vector <int> vstartC ;
    vector <int> vR;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='B')
                p++;
        }
        if(p!=0){
        v.push_back(p);
        vR.push_back(i);
        }
        p=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='B'){
                p=j;
                break;
            }
        }
        vstartC.push_back(p);
        p=0;

    }
    /*
    cout<<"Raw = "<<v.size()<<endl;
    cout<<"Coloum = "<<v[0]<<endl;
    cout<<"R = "<<vR[0]<<endl;
    cout<<"C = "<<vstartC[0]<<endl;

    */


     x=v[0]/2 + 1;

    y=v.size()/2 + 1;


    cout<<vR[0]+x <<" "<<vstartC[0]+y <<endl;


    return 0;

}
