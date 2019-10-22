#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int n,i,p=0,a[10000];
	cin>>n;
	for(i=0;i<n;i++)
	    cin>>a[i];
	sort(a,a+n);
	for(i=1;i<n;i++)
	{
	    if(a[i]<=a[i-1])
	    {
	        p=p+a[i-1]-a[i]+1;
	        a[i]=a[i-1]+1;
	    }
	}
	cout<<p;
	return 0;
}
