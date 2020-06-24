#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

int main()

{
    head = NULL;
    head = (struct Node*) malloc (sizeof(struct Node));
    head -> data =2;
    head -> link = (struct Node*) malloc (sizeof(struct Node));
    head -> link -> data = 5;
    head -> link -> link = NULL ;

    return 0;
}
