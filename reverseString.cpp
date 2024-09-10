#include <iostream>
#include <stack>
using namespace std;

string reverseString(string st) {
    string ans;
    stack<char> s;

    for (int i=0; i<st.size(); i++) {
        s.push(st[i]);
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    return ans;
}

int main(){
    string st = "abcd";
    cout << reverseString(st);
}