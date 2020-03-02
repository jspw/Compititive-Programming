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

    int x=n;

    bool a[n+1];
    memset(a,0,sizeof(a));

    // for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;

    int count =0 ;

    for(int i=1;i<=n;i++){
        if(i!=(n-i) && !a[i] && !a[n-i]){
            a[i]=1;
            n-=i;
            count++;
        }
    }

    cout<<count<<endl;

    for(int i=0;i<=x;i++){
        // cout<<"a"<<endl;
        if(a[i]==1)cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}