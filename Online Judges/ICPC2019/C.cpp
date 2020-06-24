#include <bits/stdc++.h>
using namespace std;
#define sz 10000
typedef pair <int,int> PII ;
bool myfunc( pair <int,int> x , pair <int,int> y ) {
    if ( x.first > y.first ) return true ;
    else if ( x.first == y.first && x.second <= y.second) return true  ;
    else return false ;
}
int main() {
    int t ;
    scanf("%d",&t);
    for(int twe=1;twe<=t;twe++) {
        int n,id,pb,pen,fpb,fpen ;
        scanf("%d",&n);
        vector < pair < int,int> > adj[sz];
        for ( int i = 0 ; i < n ; i++) {
            cin >> id >> pb >> pen >> fpb ;
            adj[id].push_back(make_pair(pb,pen));
            for ( int i = 0 ; i < fpb ; i++) {
                cin >> fpen ;
                pen = pen + fpen ;
                adj[id].push_back(make_pair(++pb,pen));
            }
            sort(adj[id].begin(),adj[id].end(),myfunc);
        }
        for ( int i = 1 ; i <= n ; i++) {
                cout << i << ": " ;
            for ( int j = 0 ; j < adj[i].size() ; j++) {
                cout << adj[i][j].first << "," << adj[i][j].second << " ";
            }
          cout << endl;
        }
        int order ;
        PII last ;
        bool mark = true ;
        vector<int>v;
        for(int i=0;i<n;i++)
            {
                cin>>order;
                v.push_back(order);
            }
            last = adj[order][0];
        for ( int i = 0 ; i < n ; i++) {
            //cin >> order ;
            order = v[i];
            int fact = 0 ;
            int j = 0 ;
            while(1) {
                if ( adj[order][j] <= last) {
                    last = adj[order][j] ;
                    fact == 1 ;
                   // break ;
                }
                else j++ ;
                if ( j == adj[order].size()) break ;
            }
            if ( fact ==  0 ) {mark = false ;break;}
        }
        if ( mark == false ) cout << "Case "<<twe<<": Say no to rumour >:" << endl;
        else cout << "Case "<< twe << ": We respect our judges :)" << endl;

    }
    return 0 ;
}
