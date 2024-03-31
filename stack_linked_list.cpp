#include <iostream>
#include <stack>

using namespace std;

class Node{
    private:
        int data;
        Node* next;
    
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    void setNext(Node* next){
        this -> next = next;
    }

    Node* getNext(){
        return this -> next;
    }

    void setData(int data){
        this -> data = data;
    }

    int getData(){
        return this -> data;
    }

    void display(){
        cout<<"Data: "<<data<<" Address: "<<this<<endl;
    }
};

class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = NULL;
        }

        void setTop(Node* top){
            this -> top = top;
        }

        Node* getTop(){
            return this -> top;
        }

        void push(int data){
            Node* newNode = new Node(data);
            if(top == NULL){
                top = newNode;
            } else {
                top -> setNext(newNode);
                top = newNode;
            }
        }

        void pop(){
            if(top == NULL){
                cout<<"stack underflow"<<endl;
            } else {
                Node* temp = top -> getNext();
                delete top;
                top = temp;
            }
        }

        int peek(){
            if(top == NULL){
                cout<<"stack is empty"<<endl;
            } else {
                return top -> getData();
            }
        }

        bool isEmpty(){
            if(top == NULL){
                return true;
            } else {
                return false;
            }
        }

        void display(){
            Node* temp = top;
            while(temp != NULL){
                temp -> display();
                temp = temp -> getNext();
            }
        }

        void isFull(){
            if(top != NULL){
                cout<<"stack is full"<<endl;
            } else {
                cout<<"stack is not full"<<endl;
            }
        }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.display();

    s.pop();

    return 0;
}
