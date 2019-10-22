#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

bool myfunct ( int a, int b)
{
    return (a > b); // " > will sort diccendending & default or " < " will accending sorting !!
}

int main()
{
    int i ;

    vector <int > vec ;

    vector <int> :: iterator it ;

    vec.push_back(45) ;
    vec.push_back(23) ;
    vec.push_back(78) ;
    vec.push_back(89) ;
    vec.push_back(54) ;
    vec.push_back(45) ;

    for(it=vec.begin();it!=vec.end();it++)

    {

        cout << *it << " " ;

    }
    cout << endl ;

    sort(vec.begin(),vec.end()) ; // default : accending sorting without #myfunct function above

    for(it=vec.begin();it!=vec.end();it++)
    {

        cout << *it << " " ;

    }

    cout << endl ;

    sort(vec.begin(),vec.end(),myfunct) ; // descending sorted !!

    for(it=vec.begin();it!=vec.end();it++)
    {

        cout << *it << " " ;

    }




    return 0;
}
