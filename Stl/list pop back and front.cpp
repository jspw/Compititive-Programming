#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include<bits/stdc++.h>

using namespace std;

int main()


{
    int i;

    int ar[5] = { 1,2,3,4,5 } ;

    list <int> lst (ar,ar+5) ;

    list <int> :: iterator it ;

    for( it = lst.begin() ; it != lst.end() ; it++ )

        cout << *it << " " ;

    cout << endl ;

    lst.pop_back() ;

    for( it = lst.begin() ; it != lst.end() ; it++ )

        cout << *it << " " ;

    cout << endl ;

    lst.pop_front() ;


    for( it = lst.begin() ; it != lst.end() ; it++ )

        cout << *it << " " ;

    cout << endl ;

    lst.pop_front() ;

    lst.pop_back() ;


    for( it = lst.begin() ; it != lst.end() ; it++ )

        cout << *it << " " ;

    cout << endl ;







    return 0;
}

