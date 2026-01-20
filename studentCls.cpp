#include <iostream>
using namespace std;

class student{
	private:
		float s1,s2,s3;
	public:
		void getmarks(){
			cin>>s1;
			cin>>s2;
			cin>>s3;
		}
		float average(){
			float a=(s1+s2+s3)/3;
			return a;
		}
		float percentage(){
			float p=(s1+s2+s3)/3;
			return p;
		}
};
int main(){
	student st1,st2,st3;
	cout<<"Enter marks of Student 1"<<endl;
	st1.getmarks();
	cout<<"Enter marks of Student 2"<<endl;
	st2.getmarks();
	cout<<"Enter marks of Student 3"<<endl;
	st3.getmarks();
	
	cout<<"\n\n Student1:"<<endl;
	cout<<"average:"<<st1.average()<<endl;
	cout<<"percentage:"<<st1.percentage()<<endl;
	
	cout<<"Student2:"<<endl;
	cout<<"average:"<<st2.average()<<endl;
	cout<<"percentage:"<<st2.percentage()<<endl;	
	
	cout<<"Student3:"<<endl;
	cout<<"average:"<<st3.average()<<endl;
	cout<<"percentage:"<<st3.percentage()<<endl;
	return 0;
}
