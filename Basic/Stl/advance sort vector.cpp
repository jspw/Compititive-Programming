#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()

{

    int i;

    vector <int> vec;

    vector <int> :: iterator it;

    vec.push_back(43) ;
    vec.push_back(67) ;
    vec.push_back(11) ;
    vec.push_back(78) ;
    vec.push_back(89) ;
    vec.push_back(56) ;

    for(it=vec.begin() ; it!=vec.end() ; it++)
    {

        cout << *it << " " ;

    }

    cout << endl ;

    sort(vec.begin() , vec.begin() + 3); // sort 1st 3 eliments only

    for(it=vec.begin() ; it!= vec.end() ; it++)
    {

        cout << *it << " " ;

    }

    cout << endl ;

     sort(vec.begin() , vec.end());

    for(it=vec.begin() ; it!= vec.end() ; it++)
    {

        cout << *it << " " ;

    }

    return 0;

}

