#include<stdio.h>
#include<math.h>

long int a, b, c, d, e, f;
long int fn( long int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() {
    long int n, caseno = 0, cases;
    scanf("%ld", &cases);
    while( cases-- ) {
        scanf("%ld %ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %ld: %ld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
