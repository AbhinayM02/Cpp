#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist() {
        head=nullptr;
    }
    void insertatend(int v){
        Node* newnode=new Node();
        newnode->data=2*v;
        newnode->next=nullptr;
        if(head==nullptr){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main() {
    Linkedlist l;
    l.insertatend(1);
    l.insertatend(2);
    l.insertatend(3);
    l.insertatend(4);
    l.insertatend(5);
    l.display();
}
