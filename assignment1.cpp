#include <iostream>
using namespace std;
class Bankacc{
  private :
    long int accno;
    char name[50];
    long int phno;
    float balance;
  public:
    Bankacc(){
        balance=0.00;
    }
    friend class accounts;
};
class accounts{
    public:
        int search(Bankacc a[], int k){
            for(int i=0;i<6;i++){
            if(a[i].accno == k){
                return i;
            }
        }
            return -1;
        }
        void create(Bankacc a[],int i){
            cout<<"Enter Account Number\n";
            cin>>a[i].accno;
            cout<<"Enter name\n";
            cin>>a[i].name;
            cout<<"Enter contact info\n";
            cin>>a[i].phno;
        }
        void deposit(Bankacc a[],int i ){
            cout<<"Enter the amount to be deposited\n";
            int d=0;
            cin>>d;
            a[i].balance+=d;
        }
        void withdrawal(Bankacc a[],int i){
            cout<<"Enter the amount to be withdrawed\n";
            int w=0;
            cin>>w;
            if(a[i].balance >= w){
                a[i].balance -= w;
            }
            else{
                cout<<"Insufficient balance\n";
            }
        }
        void enquiry(Bankacc a[],int i){
            cout<<"Balance: "<<a[i].balance;
        }
        void update(Bankacc a[],int i){
            cout<<"Enter new account number\n";
            cin>>a[i].accno;
            cout<<"Enter new name\n";
            cin>>a[i].name;
            cout<<"Enter new contact info\n";
            cin>>a[i].phno;
        }
};
int main(){
    Bankacc c[6];
    accounts p;
    int a,j,k,i=0;
    st:
    cout<<"\n";
    cout<<"1-Account creation\n";
    cout<<"2-Deposit\n";
    cout<<"3-Withdraw\n";
    cout<<"4-Balance enquiry\n";
    cout<<"5-Account Details Update\n";
    cout<<"6-Exit\n\n";
    cout<<"Choose an option\n";
    cin>>a;
    switch(a){
    case 1: if(i<6){
                p.create(c,i);
                i++;
            }
            else{
                cout<<"Maximum account creations reached\n";
            }
            goto st;
            break;
            
    case 2: cout<<"Enter account number\n";
            cin>>k;
            j=p.search(c,k);
            if(j == -1){
                cout<<"Account not found\n";
            }
            else{
                p.deposit(c,j);
            }
            goto st;
            break;
            
    case 3: cout<<"Enter account number\n";
            cin>>k;
            j=p.search(c,k);
            if(j == -1){
                cout<<"Account not found\n";
            }
            else{
                p.withdrawal(c,j);
            }
            goto st;
            break;
            
    case 4: cout<<"Enter account number\n";
            cin>>k;
            j=p.search(c,k);
            if(j == -1){
                cout<<"Account not found\n";
            }
            else{
                p.enquiry(c,j);
            }
            goto st;
            break;
            
    case 5: cout<<"Enter account number\n";
            cin>>k;
            j=p.search(c,k);
            if(j == -1){
                cout<<"Account not found\n";
            }
            else{
                p.update(c,j);
            }
            goto st;
            break;
            
    case 6: break;
    return 0;
}
}
