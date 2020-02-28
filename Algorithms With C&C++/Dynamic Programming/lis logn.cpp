#include<bits/stdc++.h>
using namespace std;
int main(){

	int i,j,n;
	cin>>n;
	int ary[n+1];
	for(i=0;i<n;i++){
		cin>>ary[i];

	}

	int lis[n];
	for(i=0;i<n;i++)
		lis[i]=1;
	for(i=0;i<n;i++)
		cout<<lis[i]<<" ";
	cout<<endl;

	set<int>st;
	set<int>::iterator it;

	for(i=0;i<n;i++){
		st.insert(ary[i]);
		it=st.find(ary[i]);
		it++;
		if(it!=st.end())
			st.erase(it);
	}

	cout<<st.size()<<endl;

	return 0;
}
