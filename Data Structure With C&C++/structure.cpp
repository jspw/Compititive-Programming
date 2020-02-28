#include<stdio.h>
#include<cstring>
#include<iostream>
#include<cstdlib>
using namespace std;

struct myst{
    int roll;
    char name[100];
    int age ;
    double hight;
};

int main()
{
    struct myst s1;
    struct myst s2;
    s1.age=15;
    s2.age=20;
     strcpy(s1.name,"SHifat");
   strcpy(s2.name,"Mehedi");
    printf("%s",s1.name);
    printf("%d",s1.age);
    return 0;
}
