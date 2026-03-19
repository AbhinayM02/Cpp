#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head; 

public:
    
    LinkedList() {
        head = nullptr;
    }
   
    void insertAtend(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if(head==nullptr){
        	head = newNode;
        	return;
		}
		Node* temp = head;
		while(temp -> next != nullptr){
			temp = temp->next;
		}
		temp -> next = newNode;
    }
    void reverse(int v){
        Node* prev=search(v);
        Node* curr=head;
        Node* fwd=nullptr;
        while(curr->data!=v){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        head=prev;
    }
    Node* search(int v){
        Node* temp=head;
        while(temp->data!=v){
            temp=temp->next;
        }
        return temp;
    }
        void display() {
        Node * temp = head;
        while(temp!=nullptr){
        	cout << temp-> data << " -> ";
        	temp = temp->next;
		}
		if(temp == nullptr){
			cout << "NULL" << endl;
		}
    }
};

int main() {
    LinkedList list;

    list.insertAtend(10);
    list.insertAtend(20);
    list.insertAtend(30);
    list.insertAtend(40);
    list.insertAtend(50);
    list.display();
    list.reverse(30);
    list.display();
    return 0;
}
