#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val) {
    if(s.empty()) {
        s.push(val);
        return;
    }

    int top = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(top);
}

void reverse(stack<int>& s) {
    if(s.empty()) {
        return;
    }

    int top = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,top);
}

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

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    } cout << endl;
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);
    reverse(s);
    printStack(s);

    string st = "abcd";
    // cout << reverseString(st);
}