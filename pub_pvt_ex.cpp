#include <iostream>
using namespace std;
class Student{
	private:
		int rollno,marks;
	public:
		char collegeName[50];
		void read(){
			cout<<"Enter Rollno: ";
			cin>>rollno;
			cout<<"Enter Marks: ";
			cin>>marks;
			cout<<"Enter College Name: ";
			cin>>collegeName;
		}
		void display(){
			cout<<"Rollno: "<<rollno<<endl;
			cout<<"Marks: "<<marks<<endl;
			cout<<"College Name: "<<collegeName<<endl;
		}
};
int main(){
	Student s[3];
	int i;
	for(i=0;i<3;i++){
		cout<<"Student "<<i+1<<":\n";
		s[i].read();
		cout<<"\n";
	}
	for(i=0;i<3;i++){
		cout<<"Student "<<i+1<<":\n";
		s[i].display();
		cout<<"\n";
	}
	
	return 0;
}
