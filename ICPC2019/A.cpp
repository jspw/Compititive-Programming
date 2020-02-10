#include<bits/stdc++.h>
using namespace std;
bool hamming(string s,string a,int n,int m){
    int cnt=0,cnt2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=a[i])
            cnt++;
        else{
            cnt2++;
        }
        if(cnt>n)
            return 0;
        else if(m==cnt2)
            return 1;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    string s,a,str;
    int n;
    for(int i=1;i<=t;i++){
        cin>>s>>a>>n;
        int cnt=0;
        int l=a.size();
        bool x=0;
        for(int j=0;j<s.size()-l+1;j++){
            str=s.substr(j,l);
            if(str==a)
                cnt++;
            else if(n>0){
                x=hamming(str,a,n,l-n);
                if(x)
                    cnt++;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }

return 0;
}
