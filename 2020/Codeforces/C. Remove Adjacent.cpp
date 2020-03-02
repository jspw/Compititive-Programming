/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


//Sort array in discending order (n to 1)
bool decSort(ll a,ll b){
    return a>b;
}


//find the maximum element of a array
ll max_of_array(ll a[],ll n){
    ll mx=a[0];
    for(ll i=0;i<n;i++){
        if(a[i]>mx) mx = a[i];
    }
    return mx;
}


//find the minimum element of a array
ll min_of_array(ll a[],ll n){
    ll mn=a[0];
    for(ll i=0;i<n;i++){
        if(a[i]<mn) mn = a[i];
    }
    return mn;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<char>v;
    for(int i=0;i<n;i++){
        v.push_back(str[i]);
    }
    vector<char>v2;

    while(1){
        for(int i=1;i<v.size()-1;i++){
            if(v[i]!='a'){
                if(int(v[i])==int(v[i-1])-1){
                    
                }
            }
        }
    }



    return 0;
}