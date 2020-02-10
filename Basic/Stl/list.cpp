#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<iterator>

using namespace std;

int main()

{
    int i;

    list <double> mylist;

    list <double> :: iterator it;

    mylist.push_back(63) ;

    mylist.push_back(4376) ;

    mylist.push_front(55) ;

    mylist.push_back(80) ;

    mylist.push_front(36) ;

    mylist.push_front(10) ;

    mylist.push_back(55) ;

    for(it = mylist.begin() ; it != mylist.end() ; it++)

    {

        cout << *it << " " ;

    }



    return 0;
}
