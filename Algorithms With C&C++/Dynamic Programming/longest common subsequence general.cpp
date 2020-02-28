#include<bits/stdc++.h>
using namespace std;

void lcs(string s1,string s2){
    int n=s1.size();
    int m=s2.size();

    int ls[n+1][m+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||j==0)
                ls[i][j]=0;
            else if(s1[i]==s2[j])
                ls[i][j]=ls[i-1][j-1]+1;
            else{
                ls[i][j]=max(ls[i-1][j],ls[i][j-1]);
            }
        }
    }


    cout<<ls[n-1][m-1]<<endl;

}

int main(){
    string s1="stone";
    string s2="longest";

    lcs(s1,s2);
}
