#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int sum = n;
    while(n > 9) {
      sum += n / 10;
      n = (n / 10) + (n % 10);
    }
    cout << sum << endl;
    }

    return 0;

}