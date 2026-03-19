#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class Linkedlist{
    private:
    
    public:
    Node* head;
    Linkedlist() {
        head=nullptr;
    }
    void insertatend(int v){
        Node* newnode=new Node();
        newnode->data=v;
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
    void deletefrombegin(){
        head=head->next;
        display();
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main() {
    Linkedlist l;
    l.insertatend(1);
    l.insertatend(2);
    l.insertatend(3);
    l.insertatend(4);
    l.insertatend(5);
    cout<<"intial list:\n";
    l.display();
    cout<<"deleting from begin:\n";
    while(l.head!=nullptr){
        l.deletefrombegin();
    }
}
