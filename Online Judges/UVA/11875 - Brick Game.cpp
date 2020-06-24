#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        int a[n+1];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        vector<int>v;


        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++ ){
                sum=sum+abs(a[i]-a[j]);
            }
            v.push_back(sum);
        }

        int mn = v[0];
        int get;
        for(int i=0;i<v.size();i++){
            if(v[i]<mn){
                mn = v[i];
                get = i;
            }
        }

        cout<<"Case "<<k<<": "<<a[get]<<endl;

    }

    return 0;
}
