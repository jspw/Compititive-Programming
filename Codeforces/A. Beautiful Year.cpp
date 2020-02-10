#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=n+1;i<=9100;i++){
            vector<int>v;
            bool check =false;

        m=i;
//        cout<<m<<endl;
        for(int j=1000;j>0;j=j/10){
            v.push_back(m/j);
 //           cout<<m/j<<endl;
            m=m%j;
        }

        for(int j=0;j<v.size();j++)
            for(int k=0;k<v.size();k++){
                if(j!=k && v[j]==v[k])
                    check = true;
            }

        if(!check){
            cout<<i<<endl;
            break;
        }


    }

    return 0;
}
