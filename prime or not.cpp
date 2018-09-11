/* C++ Program - Check Prime or Not */

#include<bits/stdc++.h>
int  main()
{
	long long int num,i;
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"This is a prime number";
	}
	else
	{
		cout<<"This is not a prime number";
	}
	return 0;
}

