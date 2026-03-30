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

    void insertatbegin(int v){
        node* newnode=new node;
        newnode->data=v;
        if(head!=nullptr){
            newnode->next=head;
            head->prev=newnode;
        }
        head=newnode;
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
    l.insertatbegin(10);
    l.insertatbegin(20);
    l.insertatbegin(30);
    l.display();
    return 0;
}
