// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    int roll_no;
    string course;
    public:
    void setup(string name,int roll_no,string course){
        this->name=name;
        this->roll_no=roll_no;
        this->course=course;
    }

    void display(){
        cout << "Name: " << this->name << endl;
        cout << "Roll no: " << this->roll_no << endl;
        cout << "Course: " << this->course << endl;

    }


};

int main(){
    Student s1;
    s1.setup("John", 1, "Btech");
    s1.display();
    Student s2;
    s2.setup("Sam",2,"Mtech");
    s2.display();


    return 0;
}


// Ques 2: Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40



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
    while(last->next!=NULL){
        last=last->next;

    }
    last->next=newNode;
}

void deleteVal(node **head,int val){
    node *temp=*head;
    node *prev=temp;
    if(temp!=NULL && temp->data==val){
        *head=temp->next;
        return;
    }
    while(temp !=NULL && temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    prev->next=temp->next;
    delete temp;

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
    int n;
    cout << "No of elements: " << endl;
    cin >>n;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        append(&head,data);
    }
    int k;
    cout << "Enter the value to be deleted: " << endl;
    cin >> k;
    deleteVal(&head,k);
    cout << "new linked list:" << endl;
    
    display(head);
    return 0;
}