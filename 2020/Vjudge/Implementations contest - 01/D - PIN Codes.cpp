/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Sort array in discending order (n to 1)
bool decSort(ll a, ll b)
{
    return a > b;
}

//find the maximum element of a array
ll max_of_array(ll a[], ll n)
{
    ll mx = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

//find the minimum element of a array
ll min_of_array(ll a[], ll n)
{
    ll mn = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }
    return mn;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        vector<pair<int,string> > res;
        map<string,int> m;
        map<int,string> out;
        for(int i=0;i<n;i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = 1;
                out[i] = s[i];
            }
            else
                res.push_back({i,s[i]});
        }
        int cnt=0;
        for(int i=0;i<res.size();i++){
            string ans = res[i].second;
            string tmp = ans;
            int flg=0;
            for(int j=0;j<4;j++){
                for(int k=0;k<10;k++){
                    ans[j] = k+'0';
                    if(m.find(ans)==m.end()){
                        cnt++;
                        m[ans] = 1;
                        out[res[i].first] = ans;
                        flg=1;
                        break;
                    }
                    else{
                        ans[j]=tmp[j];
                    }
                }
                if(flg) break;
            }
        }
        
        cout<<cnt<<endl;
        for(int i=0;i<n;i++){
            cout<<out[i]<<endl;
        }
    }
}