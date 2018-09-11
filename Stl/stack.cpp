#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Dipta");
    s.push("Shifat");
    s.push("Shifa");
    s.push("Arnob");
    s.push("Bal");


    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;

    while(!s.empty())
    {
        string x;
        x=s.top();
        cout<<x<<endl;
        s.pop();
    }

    return 0;
}
