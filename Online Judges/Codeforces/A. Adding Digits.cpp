/*

Author : 5hifaT

github:https://github.com/jspw

https://stackoverflow.com/story/jspw 


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

int ans (int a,int b,int limit){
    for(int i=a+1;i<limit;i++){
        if(i%b==0){
            return i;
        }
    }
    return -1;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,n;
    cin>>a>>b>>n;
    int limit = pow(10,n+1);
    n = pow(10,n);
    
    // cout<<n<<endl<<limit<<endl;

    a= a*n;

    // cout<<a<<endl;

    n = ans(a,b,limit);

    if(n==-1)
        cout<<"-1"<<endl;

    else 
        cout<<n<<endl;

    return 0;
}