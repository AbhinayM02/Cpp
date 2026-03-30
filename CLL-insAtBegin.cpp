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
    Linkedlist(){
        head=0;
    }
    void insertatbegin(int v){
        Node* newnode=new Node();
        newnode->data=v;
        if(head==0){
            head=newnode;
            newnode->next=head;
            return;
        }
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        newnode->next=head;
        head=newnode;
        temp->next=head;
    }
    void display(){
        Node* temp=head;
        while(temp->next!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<"->REPEAT\n";
    }
};
int main() {
    Linkedlist l;
    l.insertatbegin(1);
    l.insertatbegin(2);
    l.insertatbegin(3);
    l.insertatbegin(4);
    l.insertatbegin(5);
    l.display();
    return 0;
}
