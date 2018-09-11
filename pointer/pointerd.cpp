#include<bits/stdc++.h>
using namespace std;
int main()
{

	int x=10;
	int * p;
	p=&x;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",&p);
	return 0;
}