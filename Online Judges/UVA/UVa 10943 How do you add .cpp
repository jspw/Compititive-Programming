#include<bits/stdc++.h>
using namespace std;

long int c[200][100];

void nCr(long int n,long int r){
    for(long int i=0;i<=n;i++){
        for(long int j=0;j<=min(i,r);j++){
            if(j==0||j==i)
                c[i][j]=1;
            else{
                c[i][j]=(c[i-1][j-1] + c[i-1][j])%1000000;
            }
        }
    }
}

int main(){
    long int n,k;

    nCr(100+100-1,99);

    while(cin>>n>>k){
            if(n==0 && k==0)
                break;

        cout<<c[n+k-1][k-1]<<endl;

    }
}
