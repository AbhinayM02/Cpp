#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    stack<int> s;
    for(int x : v) {
        s.push(x);
    }
    for(int i = 0; i < v.size(); i++) {
        v[i] = s.top();
        s.pop();
    }
    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}
