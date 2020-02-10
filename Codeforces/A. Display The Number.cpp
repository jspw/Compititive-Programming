
#include <bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main(){
	scanf("%d",&t);
	for(int u=1;u<=t;u++)
	{
		scanf("%d",&n);
		s="";
		while(n>3)s='1'+s,n-=2;
		if(n==3)s='7'+s;
		else s='1'+s;
		cout<<s<<endl;
	}
	return 0;
}
