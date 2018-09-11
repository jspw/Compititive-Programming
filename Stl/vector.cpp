#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
int i,y;
    vector <int> vec;
    vec.push_back(34); //vec[0]=34
    vec.push_back(21);
    vec.push_back(65);

    for(i=0;i<3;i++)
    {
        cout<<vec[i]<<" ";
    }
    y=vec.size(); // size of vector
    cout<<endl<<y<<endl;


    vector <int> vec2(10,1);

    vec2.push_back(19);

     for(i=0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<" ";
    }
    cout<<endl<<vec2.size();

    vec2.push_back(19);



    return 0;
}
