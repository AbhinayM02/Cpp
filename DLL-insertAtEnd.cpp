#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev=nullptr;
    node* next=nullptr;
};

class linkedlist {
private:
    node *head;

public:
    linkedlist() {
        head = nullptr;
    }

    void insertatend(int v){
        node* newnode=new node;
        newnode->data=v;
        if(head==nullptr){
            head=newnode;
            return;
        }
        node* temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
    void display() {
        if (head == nullptr) return;
        node *temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != 0);
        cout << "(null)\n";
    }
};

int main() {
    linkedlist l;
    l.insertatend(10);
    l.insertatend(20);
    l.insertatend(30);
    l.display();
    return 0;
}
