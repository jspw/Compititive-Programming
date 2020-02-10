#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,4,6,7,3,10};
    list<int >lst;
    list<int>::iterator it;

    //push back and print list
    //You cant print list without iterator

    lst.push_back(45);
    lst.push_back(54);
    lst.push_back(23);
    lst.push_back(9);
    lst.push_back(47);
    lst.push_back(89);
    for(it=lst.begin();it!=lst.end();it++) // dnt use '<' ,use '!='
    cout<<*it<<" ";
    cout<<endl;

    //push back and print list

    list<int>lst1;
    lst1.push_front(1);
    lst1.push_front(5);
    lst1.push_front(8);
    lst1.push_front(4);
    lst1.push_front(9);
    lst1.push_front(6);
    for(it=lst1.begin();it!=lst1.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    //reverse  a list

    lst1.reverse();
    for(it=lst1.begin();it!=lst1.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    //clear all elements of list

    lst1.clear();
    cout<<lst1.size()<<endl;

    //insert the elements of a array in list

    list<int>lst2(a,a+6);
    list<int>::iterator it1;
    for(it1=lst2.begin();it1!=lst2.end();it1++)
    cout<<*it1<<" ";
    cout<<endl;

    //find a element of a list

    it1=find(lst2.begin(),lst2.end(),7);
    cout<<*it1<<endl;

    //insert elements before a element

    lst2.insert(it1,100);
    for(it1=lst2.begin();it1!=lst2.end();it1++)
    cout<<*it1<<" ";
    cout<<endl;

    //erease a element

    it1=find(lst2.begin(),lst2.end(),6);
    lst2.erase(it1);
    for(it1=lst2.begin();it1!=lst2.end();it1++)
    cout<<*it1<<" ";
    cout<<endl;

    //what happend if dnt find a element in a list

    it1=find(lst2.begin(),lst2.end(),56);
    if(it==lst2.end())
    cout<<"Not Found"<<endl;
    else
    cout<<"Found"<<endl;

    return 0;
}
