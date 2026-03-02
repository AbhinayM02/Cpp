/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Linkedlist{
    private :
        Node* head;
    public:
        Linkedlist(){
            head=nullptr;
        }
        void insertionatend(int value){
            Node* newnode= new Node();
            newnode->data=value;
            newnode->next=nullptr;
            if(head==nullptr){
                head=newnode;
                return;
            }
            Node* temp=head;
            while(temp->next !=nullptr){
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
            if(temp==nullptr){
                cout<<"NULL\n";
            }
        }
        void reverse(){
            Node* current;
            Node* prev;
            Node* next;
            current =head;
            prev =nullptr;
            next=nullptr;
            while(current!=nullptr){
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head=prev;
        }
};
int main()
{
    Linkedlist l1;
    l1.insertionatend(10);
    l1.insertionatend(20);
    l1.insertionatend(30);
    l1.insertionatend(40);
    l1.insertionatend(50);
    l1.insertionatend(60);
    l1.display();
    l1.reverse();
    l1.display();
    return 0;
}
