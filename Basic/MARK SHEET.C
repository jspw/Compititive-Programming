#include<stdio.h>
int mainm()
{
    int marks,i,count;
    int total_marks[]= {86,78,94,68,92,78,64,62,72,61,72,66,65,65,80,72,62,68,81,62,56,68,58,56,82,70,74,78,76,84,88,73,62,66,76,70,67,65,77,63} ;
    for (marks = 50;marks <= 100; marks ++) {
        count=0;
        for (i=0;i<40;i++) {
            if (total_marks[i]==marks) {
                count ++ ;
            }
        }
        printf("Marks:%d Count:%d\n",marks,count);
    }
    return 0;
}
