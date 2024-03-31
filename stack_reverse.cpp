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

    void display(){
        for(int i = 0; i < size; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

    bool isFull(){
        if(top == size - 1){
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    string str;
    cout<<"enter a string: ";
    cin>>str;

    Stack s(str.length());

    for(int i = 0; i < str.length(); i++){
        s.push(str[i]);
    }

    string newstr = "";

    while(s.isEmpty() == false){
        newstr += s.peek();
        s.pop();
    }

    cout<<"reverse is: "<<newstr<<endl;
    
    return 0;
}
