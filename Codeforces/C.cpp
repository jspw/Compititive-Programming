#include<bits/stdc++.h>
using namespace std;

vector<long int>v;

void fibo(long long int  n){

    long long int a=1;
    long long int b=1;
    long int c;
    v.push_back(a);
    v.push_back(b);
    for(long long int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        v.push_back(c);
    }

}

int main(){

    fibo(100);

//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<< " ";
    cout<<v[v.size()-1]<<endl;

        return 0;
}
