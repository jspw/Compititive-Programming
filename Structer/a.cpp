#include<stdio.h>
#include<conio.h>
struct  person
{
    char name;
    int age;
    float salary;
};
int main()
{
    struct person persion1,persion2;
    //persion1.name = 'Shifat';
    persion1.age = 18;
    persion1.salary = 112134.42;
    //printf("Name :%s\n",persion1.name);
    printf("Age :%d\n",persion1.age);
    printf("Salary :%.2f\n",persion1.salary);

    getch();
}
