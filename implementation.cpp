#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    vector<int> vector;
    

    void push(int val) {
        vector.push_back(val);
    }

    void pop(){
        if (!isEmpty()) {
        vector.pop_back();
        return;
        } else {
            cout << "The stack is empty! \n";
        }
        
    }

    int top(){
        if (isEmpty()) {
        cout << "the stack is empty! \n";
        return -1;    
    }

        int lastIdx = vector.size() - 1;
        return vector[lastIdx];

    }


    bool isEmpty(){
        if(vector.size()==0) {
            return true;
        } else {
            return false;
        }
    }

};

int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

}