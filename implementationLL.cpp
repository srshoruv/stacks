#include <iostream>
#include <list>
#include <stack>
using namespace std;

template<class T>
class Stack {
public:
    list<T> ll;
    

    void push(T val) {
        ll.push_front(val);
    }

    void pop(){
        if (!isEmpty()) {
        ll.pop_front();
        return;
        } else {
            cout << "The stack is empty! \n";
        }
        
    }

    T top(){       
        return ll.front();

    }


    bool isEmpty(){
        return ll.size() == 0;
    }

    void printStack(){
        while (!isEmpty()) {
            cout << ll.front() << " ";
            ll.pop_front();
        }
    }

};

int main(){
    Stack<string> s1;
    stack<string> s;
    s.push("shoruv");
    s.push("name is ");
    s.push("My");
    // s.printStack();
    while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }

}