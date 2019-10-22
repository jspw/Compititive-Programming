#include<bits/stdc++.h>
using namespace std;


bool check(vector<int> c,int sum){
	for(int i=0;i<c.size();i++){
//		cout<<c[i]<<" "<<sum<<endl;
		if(sum==c[i])
			return false;

		
	}

	return true;
}

int main(){
	int n,m,i,j,k,x=-1,y=-1,sum=0;
	cin>>n;
	int a[n+1];

	vector <int> c;


	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
		c.push_back(a[i]);
	}

	cin>>m;
	int b[m+1];

	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin>>b[i];
		c.push_back(b[i]);
	}

//	for(i=0;i<c.size();i++)
//		cout<<c[i]<<" ";

//	cout<<endl;

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			sum=a[i]+b[j];

			if(check(c,sum)){
				x=a[i];
				y=b[j];
				break;
			}

			if(x>=0)
				break;
		}

		if(x>=0)
				break;
	}

	cout<<x<<" "<<y<<endl;
	
	return 0;
}