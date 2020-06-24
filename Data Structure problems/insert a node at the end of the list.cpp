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

void insertn (int value)
{
   struct node* temp =(struct node*) malloc (sizeof(struct node));
   temp -> data = value;
   temp -> link == NULL;
   if(head ==  NULL){

       head = temp;

   }
   else
    {
        struct node* t;
        t = head;
        while(t -> link != NULL)
        {
            t = t -> link;
        }
        t -> link = temp;
   }
}

int main()
{
    head =  NULL;
    insertn(1);
    insertn(6);
    insertn(3);

    print();

    return 0;
}

