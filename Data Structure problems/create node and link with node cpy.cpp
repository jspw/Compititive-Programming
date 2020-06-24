#include<iostream>
#include<cstdio>
using namespace std;

struct node{
    int data ;
    struct node* link;
};

struct node* head;

int main()
{
    head =  NULL;
    head = (struct node*) malloc (sizeof(struct node));
    head -> data = 10;
    head -> link =(struct node*) malloc (sizeof(struct node));
    head -> link -> data =  20;
    head -> link -> link = (struct node*) malloc (sizeof(struct node));
    head -> link -> link -> data = 100;
    head -> link -> link -> link = NULL;
    return 0;
}
