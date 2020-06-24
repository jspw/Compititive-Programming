
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int arr[100000];

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		string s;
		cin>>s;

		int t=0;
		int flag=1;

		while(flag==1)
		{
			flag=0;
		for(int i=0;i<n-1;i++)
		{

			if(s[i]=='A' && s[i+1]=='P')
			{
				s[i+1]='A';
				i++;
				flag=1;
			}

		}
			if(flag==1)
				t++;
		}

		cout<<t<<endl;
	}
}
