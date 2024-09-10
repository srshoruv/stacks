#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isDup(string s) {
    stack<char> st;

    for (int i=0; i<s.size(); i++) {
        char ch = s[i];

        if (ch != ')') {
            st.push(ch);
        } else {
            if(st.top()=='(') {
                return true; //duplicate 
                }
            while (st.top() != '(') {
                    st.pop();
                }
                st.pop();
        }
    }
     return false;
}


int main() {
    // Test Case 1: Expression with duplicate parentheses
    string s1 = "((a+b))";
    // Expected output: true (Duplicate parentheses found)

    // Test Case 2: Expression with nested but non-duplicate parentheses
    string s2 = "(a + (b + c))";
    // Expected output: false (No duplicate parentheses)

    // Test Case 3: Expression with multiple operators but no duplicate parentheses
    string s3 = "((a+b)+(c+d))";
    // Expected output: false (No duplicate parentheses)

    // Test Case 4: Expression with multiple duplicate parentheses
    string s4 = "(((a+(b))))";
    // Expected output: true (Duplicate parentheses found)

    // Test Case 5: Expression with only opening parentheses
    string s5 = "((((";

    cout << isDup(s1) <<endl;
    cout << isDup(s2) <<endl;
    cout << isDup(s3) <<endl;
    cout << isDup(s4) <<endl;
    cout << isDup(s5) <<endl;
    return 0;
}
