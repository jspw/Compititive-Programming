#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        if(a==0 && b==0 &&c==0 &&d ==0) break;
        cout<<360*3+((360-abs(b-a)*9))+((360-abs(c-b)*9))+(360-(abs(c-d)*9))<<endl;

    }

    return 0;
}