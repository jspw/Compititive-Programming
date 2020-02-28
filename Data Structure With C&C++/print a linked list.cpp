#include<iostream>
using namespace std;
struct Node{
    int data ;
    struct Node* link;
};
struct Node* head;

void print() {
    struct Node* temp ;
    temp=head;
    while(temp!= NULL) {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int main()
{
    head = NULL ;
    head =(struct Node*) malloc (sizeof(struct Node)) ;
    head -> data = 5;
    head->link = (struct Node*) malloc (sizeof(struct Node)) ;
    head -> link -> data = 10;
    head -> link -> link = NULL ;
    print();

    return 0;
}
