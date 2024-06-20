#include <iostream>
using namespace std;

template <typename T>
class Stack {
    private:
        T arr[50];
        int top;
    public:
        Stack(): top(-1) {}
        void push(T val) {
            if(top >= 49) {
                cout << "Stack overflow" << endl;
            } else {
                arr[++top] = val;
            }
        }
        T pop() {
            if(top < 0) {
                cout << "Stack underflow" << endl;
                    return 0;
                } else {
                return arr[top--];
            }
        }
        void print() const{
            if(top < 0){
                cout<<"Stack is empty"<<endl;
            }else{
                for (int i=0; i <= top; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main() {
    Stack<int> intStack;
    Stack<string> charStack;
    intStack.push(10);
    intStack.push(20);
    charStack.push("hello");
    charStack.push("world");
    cout << "Integer stack: "; intStack.print();
    cout << "String stack: "; charStack.print();
    cout << intStack.pop() << endl;
    cout << charStack.pop() << endl;
    cout << intStack.print() << endl;
    cout << charStack.print() << endl;
    
    return 0;
}

