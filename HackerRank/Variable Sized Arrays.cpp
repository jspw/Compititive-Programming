
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,q;
    cin>>t>>q;
    vector<pair<int,int>>vp;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            vp.push_back(make_pair(i,a));
        }
    }

    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    return 0;
}
