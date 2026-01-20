#include <iostream>
using namespace std;
class Employee
{
private:
    float basicpay,hra,da,gs;
public:
    void getsalary(){
        cout<<"Enter basic pay "<<endl;
        cin>>basicpay;
        cout<<"Enter hra "<<endl;
        cin>>hra;
        cout<<"Enter da "<<endl;
        cin>>da;
    }
    void calculateGrossSalary(){
        gs=basicpay+hra+da;
    }
    void displaySalary(int i){
        cout<<"Gross salary of Employee "<<i<<": "<<gs<<endl;
    }
};

int main(){
    Employee e1,e2,e3;
    cout<<"Employee 1"<<endl;
    e1.getsalary();
    e1.calculateGrossSalary();
    
    cout<<"\n"<<endl;

    cout<<"Employee 2"<<endl;
    e2.getsalary();
    e2.calculateGrossSalary();
    
    cout<<"\n"<<endl;

    cout<<"Employee 3"<<endl;
    e3.getsalary();
    e3.calculateGrossSalary();
   
    cout<<"\n"<<endl;
    e1.displaySalary(1);
    e2.displaySalary(2);
    e3.displaySalary(3);

    return 0;
}
