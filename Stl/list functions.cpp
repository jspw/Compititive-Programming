#include<stdio.h>
#include<string>
#include<vector>
#include<list>
#include<iostream>
#include<iterator>
#include<queue>

using namespace std;

int main()

{
    int i,y ;
    list <int> ml ;
    list <int> :: iterator it ;
    ml.push_back(8) ;
    ml.push_back(56) ;
    ml.push_back(10) ;
    ml.push_front(74) ;
    ml.push_front(98) ;
    ml.push_back(66) ;
    ml.push_back(34) ;
    ml.push_front(69) ;
    ml.push_back(556) ;
    ml.push_front(90) ;
    ml.push_back(23) ;

    for(it = ml.begin() ; it != ml.end() ; it++){
    cout << *it << " " ;
    }
    cout << endl ;


    ml.reverse();

     for(it = ml.begin() ; it != ml.end() ; it++){
    cout << *it << " " ;
    }

    cout << endl ;

    y=ml.size() ;

    cout << y << endl ;



    ml.clear() ;

     for(it = ml.begin() ; it != ml.end() ; it++){
    cout << *it << " " ;
    }
    cout << endl ;



    return 0;
}
