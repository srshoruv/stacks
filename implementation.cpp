#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Stack {
public:
    vector<T> vector;
    

    void push(T val) {
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
    //     if (isEmpty()) {
    //     cout << "the stack is empty! \n";
    //     return -1;    
    // }

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

    void printStack(){
        while (vector.size()!=0) {
            cout << vector[vector.size()-1] << " ";
            vector.pop_back();
        }
    }

};

int main(){
    Stack<string> s;
    s.push("shoruv");
    s.push("name is ");
    s.push("My");
    s.printStack();

}