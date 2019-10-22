#include<stdio.h>
#include<iostream>
#include<iterator>
#include<queue>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

int main()

{
    int i;

    int ar[5] = { 2,7,3,9,5} ;

    list <int > mylist(ar,ar+5) ;

    list <int> :: iterator it ;

    it=mylist.begin() ;

    cout<<*it<<endl;

    mylist.insert(it,100) ;

    for(it = mylist.begin() ; it != mylist.end() ; it ++)

        cout << *it << " " ;

    cout << endl ;

    it = find ( mylist.begin(), mylist.end(), 9 )  ;

    mylist.insert(it, 50) ;

    for(it = mylist.begin() ; it != mylist.end() ; it ++)

        cout << *it << " " ;

    cout<<endl<<"y ";

    it=find(mylist.begin() , mylist.end() , 20) ;

    cout << *it <<endl ;

    if(it == mylist.end())

    cout<<"N'T FOUND"<<endl;


    else
    cout<<"FOUND"<<endl;

    it= find ( mylist.begin() , mylist.end() ,3 ) ;

    mylist.erase(it) ;

    for( it = mylist.begin() ; it != mylist.end() ; it++)

        cout << *it << " " ;

    cout<<endl ;

    return 0;
}
