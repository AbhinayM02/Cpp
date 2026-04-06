#include <bits/stdc++.h>
#include <vector> 
using namespace std;

int main() {
    vector<int> a={1,2,3,4,5};
    vector<int> b={1,2,3,4,5};
	stack<int> s1;
	stack<int> s2;
	for(auto it:a){
	    s1.push(it);
	}
	for(auto it:b){
	    s2.push(it);
	}
	if(s1.size()!=s2.size()){
	    cout<<"NOT EQUAL\n";
	    return false;
	}
	while(s1.size()!=0){
	    if(s1.top()!=s2.top()){
	        cout<<"NOT EQUAL\n";
	        return false;
	    }
	    s1.pop();
	    s2.pop();
	}
	cout<<"EQUAL\n";
	return 0;

}
