#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<iterator>
#include<algorithm>
using namespace std;
bool accsort(int a, int b){
    return (a>b); //a function for deccending sort
}
int main()
{
    int i;

    //vector declare and input & vector print

    vector <int> vec;
    vec.push_back(34); //vec[0] = 34 ;
    vec.push_back(10); //vec [1]=10;
    vec.push_back(11);
    for(i=0;i<vec.size();i++)
    printf("%d ",vec[i]);
    cout<<endl;

    //input vector ,size of 5 and insert 8 for all vector index

    vector<int>v2(5,8); //all index are 8
    for(i=0;i<v2.size();i++)
    printf("%d ",v2[i]);
    cout<<endl;

    //use of iterator

    vector<int>v3;
    vector<int> :: iterator it ;
    for(i=1;i<=20;i++)
    v3.push_back(i) ; //insert from 1 to 20 in vector
    for(i=0;i<20;i++)
    cout<<v3[i]<<" ";
    cout<<endl;
    it=v3.begin(); //iterator it,point at v3[0] as pointer
    for(it=v3.begin();it<v3.end();it++)
    cout<<*it<<" "; //printing vector all eliments using iterator
    cout<<endl;

    //printing vector

    vector <int> v4;
    v4.push_back(90);
    v4.push_back(96);
    v4.push_back(5);
    v4.push_back(55);
    v4.push_back(34);
    v4.push_back(100);
    v4.push_back(66);
    v4.push_back(89);
    for(i=0;i<v4.size();i++)
    cout<<v4[i]<<" ";
    cout<<endl;

    //sorting vector elements accending

    vector <int> v5;
    v5.push_back(90);
    v5.push_back(96);
    v5.push_back(5);
    v5.push_back(55);
    v5.push_back(34);
    v5.push_back(100);
    v5.push_back(66);
    v5.push_back(89);
    sort(v5.begin(),v5.end()) ; //sorting vector elements accending
    for(i=0;i<v5.size();i++)
    cout<<v5[i]<<" ";
    cout<<endl;

    //sorting vector elements deccending

    vector <int> v6;
    v6.push_back(90);
    v6.push_back(96);
    v6.push_back(5);
    v6.push_back(55);
    v6.push_back(34);
    v6.push_back(100);
    v6.push_back(66);
    v6.push_back(89);
    sort(v6.begin(),v6.end(),accsort) ; //sorting vector elements deccending
    for(i=0;i<v6.size();i++)
    cout<<v6[i]<<" ";
    cout<<endl;

    //sorting vector elements for first n(3) elements

    vector <int> v7;
    v7.push_back(90);
    v7.push_back(96);
    v7.push_back(5);
    v7.push_back(55);
    v7.push_back(34);
    v7.push_back(100);
    v7.push_back(66);
    v7.push_back(89);
    sort(v7.begin(),v7.begin()+3); //sorting vector elements for first n(3) elements
    for(i=0;i<v7.size();i++)
    cout<<v7[i]<<" ";
    cout<<endl;


    v7.clear(); //clear the vector
    cout<<v7.size()<<endl;



    return 0;
}
