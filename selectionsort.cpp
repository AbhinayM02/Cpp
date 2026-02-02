#include <iostream>
using namespace std;
int main(){
	int a[]={99,11,77,33,88,22,66,44,55};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
		cout<<"Sorted array: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
