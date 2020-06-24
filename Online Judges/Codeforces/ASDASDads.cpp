#include <bits/stdc++.h>
#define pi 3.141593
using namespace std;
int main() {
    int t,a;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&a);
        double x = sqrt(2)*a;
        //cout << x << endl;
        //cout << pow(x,2) << endl;
        //cout << pow(a,2) << endl;
        double y = sqrt(pow(x,2)-pow(a,2));
       // cout << y << endl;
        double ans = pi*(pow(x,2)-pow(y,2));
        //cout << pow(y,2);
        //cout << ans << endl;
        cout << fixed << setprecision(6) << ans ;
    }
    return 0 ;
}
