#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t ;
     long long N ;
     scanf("%d",&t);
     int caseno = 0 ;
     while(t--) {
        scanf("%lld",&N);
        long long x,a ;
        vector <long long > vec ;
        for ( int i = 0 ; i < N ; i++) {
                cin >> a ;
                vec.push_back(a);
        }
        sort(vec.begin(),vec.end());

        cout << "Case " << ++caseno << ": " << vec[0]*vec[vec.size()-1]<< endl;

     }

    return 0;
}
