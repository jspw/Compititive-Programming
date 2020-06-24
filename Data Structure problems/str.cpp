#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

struct myst{
    int roll;
    string name;
    int age ;
    double hight;
};

int main()
{
    struct myst s1;
    struct myst s2;
    s1.age=15;
    s2.age=20;
    s1.name="Shifat";
    s2.name="Mehedi";
    cout<<s1.name;
    printf(" ");
    printf("%d",s1.age);
    return 0;
}
