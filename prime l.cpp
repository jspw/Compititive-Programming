#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n;
    cin>>n;
    if(n<2)
    cout<<n<<" is not a prime number"<<endl;
    for(i=2;i*i<n;i++){
        if(n%i==0){
        cout<<n<<" is not a prime number"<<endl;
        return 0;
        }
        else {
            cout<<n<<" is a prime number"<<endl;
            return 0;
        }

    }

}
