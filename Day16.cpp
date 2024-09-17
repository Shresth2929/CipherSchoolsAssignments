// Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40

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
    if(*head==NULL){
        *head=newNode;
        return;
    }
    node *last=*head;
    while(last->next !=NULL){
        last=last->next;
    }
    last->next=newNode;
}
void display(node *head){
    node *current=head;
    while(current !=NULL){
        cout << current->data << " ";
        current=current->next;
    }
}
void insertSort(node **head,int val){
    node *newNode=new node();
    newNode->data=val;
    newNode->next=NULL;
    if(*head==NULL || (*head)->data>=val){
        newNode->next=*head;
        *head=newNode;
    }
    node *current=*head;
    while(current->next!=NULL && current->next->data<val){
        current=current->next;
    }
    newNode->next=current->next;
    current->next=newNode;
}
int main(){
    node *head=NULL;
    int n;
    cout << "No of elements: ";
    cin >> n;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        append(&head,data);
    }
    display(head);
    cout << endl;
    int k;
    cout << "New element: " << endl;
    cin >>k;
    insertSort(&head,k);
    cout << "New Linked List: " << endl;
    display(head);
    

    return 0;
}