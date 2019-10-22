#include<iostream>
#include<string>
#include<iterator>
using namespace std;
int main(){
    string str;
    string::iterator it; 
    string ::reverse_iterator rit;
    cin>>str;
    cout<<"this is for cin " + str<<endl;

    getline(cin,str); //this getline will capture the space of cin>>str;
    //if there is a integer cin>>n, getline() will capture the white space of the enter button

    cout<<"This is for getline() " + str<<endl;

    getline(cin,str);
    cout<<"This is for getline() " + str<<endl;

    str.push_back('s');

    cout<<str<<endl;

    cout<<"capacity of str = " + str.capacity()<<endl;

    string s= "This is a shit ok";
    cout<<"s= " + s<<endl;
    cout<<"capacity of s = " + s.capacity()<<endl;
    s.resize(15);
    cout<<s<<endl;

    cout<<"capacity of s after resize = " + s.capacity()<<endl;

    s.shrink_to_fit();
    cout<<"capacity of s after shrink_to_fit = " + s.capacity()<<endl;

    cout<<"Printing s using iterator : ";
    for (it=s.begin();it!=s.end();it++){
        cout<<*it;

    }
    cout<<endl;

    cout<<"Printing s using reverse_iterator ";

    for (rit=s.rbegin();rit!=s.rend();rit++){
        cout<<*rit;
    }
    cout<<endl;

    string str1="This is string one",str2="This is string two";

    char ch[100];

    str1.copy(ch,str1.size(),6);

    cout<<ch<<endl;

    str1.swap(str2);

    cout<<str1<<str2<<endl;

    return 0;
}