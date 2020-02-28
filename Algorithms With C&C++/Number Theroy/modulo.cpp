// C++ program to find modular inverse of a under modulo m
#include<iostream>
using namespace std;

// A naive method to find modulor multiplicative inverse of
// 'a' under modulo 'm'
int modInverse(int a, int m)
{
	a = a%m;
	for (int x=1; x<m; x++)
	if ((a*x) % m == 1)
		return x;
}

// Driver Program
int main()
{
	int a = 3, m = 11;
	cout << modInverse(a, m);
	return 0;
}

