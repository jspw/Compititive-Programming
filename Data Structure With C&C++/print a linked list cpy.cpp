#include<iostream>
#include<cstdio>
using namespace std;

struct node{
    int data ;
    struct node* link;
};

struct node* head;

void print()
{
    struct node* temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> link;
    }
}

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

    print ();

    return 0;
}
