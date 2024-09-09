#include <iostream>
#include <stack>
using namespace std;
template <class T>

void pushAtBottom (stack<T>& st, T val) {
    if(st.empty()) {
        st.push(val);
        return;
    }

    T topElement = st.top();
    st.pop();
    pushAtBottom(st, val);
    st.push(topElement);

}
template<class T>
void printStack(stack<T> st) {
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    } cout << endl;
}

int main () {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original Stack: ";
    printStack(st);

    // Push 0 at the bottom
    pushAtBottom(st, 0);

    cout << "Stack after pushing 0 at the bottom: ";
    printStack(st);

    return 0;
}