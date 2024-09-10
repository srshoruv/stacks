#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

bool isvalid(string str) {
    stack<char> st;
    for (int i=0; i<str.size(); i++) {
        char ch = str[i];

        if(ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if(st.empty()) {
            return false;
        }
            char top = st.top();
            if ((top == '(' && ch == ')') ||
                (top == '{' && ch == '}')||
                (top == '[' && ch == ']')) {
                    st.pop();
                    
                } else {
                    return false;
                }
        }

    }
    return st.empty();
}

int main() {
    // Test Case 1: Simple balanced parentheses
    string s1 = "()";
    // Expected output: true (Valid)

    // Test Case 2: Nested balanced parentheses
    string s2 = "({[]})";
    // Expected output: true (Valid)

    // Test Case 3: Unbalanced parentheses
    string s3 = "(]";
    // Expected output: false (Invalid)

    // Test Case 4: Extra closing bracket
    string s4 = "([)]";
    // Expected output: false (Invalid)

    // Test Case 5: No closing bracket
    string s5 = "(((";
    // Expected output: false (Invalid)

    // Test Case 6: Multiple types of balanced brackets
    string s6 = "{[()]}";
    // Expected output: true (Valid)

    // Test Case 7: Empty string
    string s7 = "";
    // Expected output: true (Valid)

    // Test Case 8: Single type of brackets repeated
    string s8 = "(((((())))))";
    // Expected output: true (Valid)

    // Test Case 9: Only opening brackets
    string s9 = "(((((";
    // Expected output: false (Invalid)

    // Test Case 10: Only closing brackets
    string s10 = "))))";
    // Expected output: false (Invalid)

    // Add your function calls here to test with these test cases
    // Example:
    // bool result = isValid(s1);
    // cout << (result ? "true" : "false") << endl;

    cout << isvalid(s1) << endl;
    cout << isvalid(s2)<< endl;
    cout << isvalid(s3)<< endl;
    cout << isvalid(s4)<< endl;
    cout << isvalid(s5)<< endl;
    cout << isvalid(s6)<< endl;
    cout << isvalid(s7)<< endl;
    cout << isvalid(s8)<< endl;
    cout << isvalid(s9)<< endl;
    cout << isvalid(s10)<< endl;



    return 0;
}
