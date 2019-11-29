#include<bits/stdc++.h>
using namespace std;

bool root(int n){
    if(n==(sqrt(n)*sqrt(n))){
        cout<<n<<" "<<sqrt(n)*sqrt(n)<<endl;
        return true;

    }

    else
        return false;
}

bool prime(int n){
     int i, flag = 1;
    for (i = 2; i <= sqrt(n)+1; i++) {

        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

int main()
{
    int n;
    cin>>n;
    cout<<root(n)<<" "<<prime(n)<<endl;
    if(root(n)){
        cout<<4*sqrt(n)<<endl;
        cout<<"root"<<endl;
    }
    else if(prime(n)){
        cout<<(2*n)+2<<endl;
        cout<<"prime"<<endl;
    }

    else {
        cout<<"bal"<<endl;
        for(int i= sqrt(n);i>=0;i--){
            if(n%i==0)
            {
                cout<<i<<" "<<n/i<<endl;
                cout<<2*(i + (int)(n/i)  )<<endl;
                break;
            }
        }
    }

    return 0;

}
