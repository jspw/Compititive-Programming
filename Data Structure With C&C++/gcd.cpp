
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(1)
    {
        int reminder = a%b;
        if(reminder == 0 )
            return b;
        a=b;
        b=reminder;
    }

}

int gcdRe(long long  a,long long  b)
{
    if(b==0)
        return a;
    else gcdRe(b,a%b);
}

int main()
{
    cout<<gcdRe(100760000,3667570)<<endl;
    return 0;

}

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


int main()
{
	int a = 10, b = 15;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	a = 35, b = 10;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	a = 31, b = 2;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	return 0;
}

