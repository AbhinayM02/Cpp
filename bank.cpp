#include <iostream>
using namespace std;
class BankAccount{
	private:
		float balance;
	public:
		BankAccount(){
			balance=0.00;
		}
		friend class AccountManager;
};
class AccountManager{
	public:
		void display(BankAccount &b){
			cout<<"Balance:"<<b.balance<<endl;
		}
		void add(BankAccount &b){
			cout<<"Enter the amount to be credited: "<<endl;
			int a;
			cin>>a;
			b.balance+=a;		
		}
		void sub(BankAccount &b){
			cout<<"Enter the amount to be debited: "<<endl;
			int a;
			cin>>a;
			b.balance-=a;
		}
		friend class BankAccount;
};
int main(){
	BankAccount s;
	AccountManager p;

	int a;
 	st:
	cout<<"1-display balance\n";
	cout<<"2-credit amount\n";
	cout<<"3-debit amount\n";
	cout<<"4-End\n";
	
	
	cin>>a;
	switch(a){
		case 1:
			p.display(s);
			goto st;
			break;
		case 2:
			p.add(s);
			goto st;
			break;
		case 3:
			p.sub(s);
			goto st;
			break;
		case(4):
			break;
		default:
			cout<<"Enter correct no.";
			goto st;
			break;
}
	return 0;
}
