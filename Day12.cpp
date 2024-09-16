// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void printMe(node* head){
    node* current=head;
    while(current !=0){
        cout << current->data<<" ";
        current=current->next;
    }
}

int main(){
    node *head=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
    printMe(head);
    return 0;
}


// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
void append(node **head,int val){
    node *newNode=new node();
    newNode->data=val;
    newNode->next=NULL;
    node *last=*head;
    if(*head==NULL){
        *head=newNode;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newNode;

}

void display(node *head){
    node *current=head;
    while(current!=NULL){
        cout << current->data << " ";
        current=current->next;
    }

}
int main(){
    node *head=NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    append(&head,40);
    display(head);
    return 0;
}