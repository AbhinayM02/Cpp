#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements\n";
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i%2==0)
			sum+=a[i];
	}
	cout<<"sum of elements="<<sum;
	return 0;
}
