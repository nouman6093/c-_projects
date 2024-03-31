#include <iostream>
#include <stack>
using namespace std;

class Stack{
public:
    int* array;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        array = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top ++;
            array[top] = data;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        } else {
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return array[top];
        } else {
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        } else {
            return false;
        }
    }

    void getMid(int size){
        int mid = (top+1)/2;
        cout<<array[mid]<<endl;
    }
};

int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.getMid(5);

    return 0;
}
