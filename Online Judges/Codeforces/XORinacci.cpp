#include<bits/stdc++.h>
using namespace std;



int main(){
	long int c,a,b,n,t,i;
	cin>>t;
	while(t--){
		cin>>a>>b>>n;
		if(n==0)
			cout<<""<<a<<endl;
		else if(n==1)
			cout<<""<<b<<endl;
		else{
			for(i=2;i<=n;i++){
			c=(long int)(a^b);
		//	cout<<c<<endl;
			a=b;
			b=c;
		}
		cout<<c<<""<<endl;
		}
		
	}
}