#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mul=1,i,n,t,a[1000];
	cin>>t;
	while(t>0)
	{
		cin>>n;
		for(i=0;i<(n-1);i++)
		{
			cin>>a[i];
		}
		for(i=0;i<(n-1);i++)
		{
			mul=mul*a[i];
		}
		cout <<mul<<endl;
		mul=1;
		t--;
	}
	return 0;
}
