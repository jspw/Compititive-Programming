#include<stdio.h>

struct data
{
    char name[100];
    int reg_no;
    int term_test;
    int attendence;
    int term_final;
    double gpa;

};
int main()
{
    struct data result[10];

    int i;

    for(i=0;i<10;i++)
    {
        scanf("%s%d%d%d%d%lf",&result[i].name,&result[i].reg_no,&result[i].attendence,&result[i].term_test,&result[i].term_final,&result[i].gpa);

    }
    for(i=0;i<10;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%lf",result[i].name,result[i].reg_no,result[i].attendence,result[i].term_test,result[i].term_final,result[i].gpa);

    }

    return 0;

}
