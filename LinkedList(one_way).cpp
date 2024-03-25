#include <iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }

    int getData() const {
        return data;
    }

    void setData(int data) {
        Node::data = data;
    }

    Node *getNext() const {
        return next;
    }

    void setNext(Node *next) {
        Node::next = next;
    }

    void display(){
        cout << "|(" << this << ")|" << this->getData() << "|" << this->getNext() << ")|" << endl;
    }
};

class LinkedList{
private:
    Node* head;
    Node* tail;
public:
    LinkedList(){
        this -> head = NULL;
        this -> tail = NULL;
    }

    Node *getHead() const {
        return head;
    }

    void setHead(Node *head) {
        LinkedList::head = head;
    }

    Node *getTail() const {
        return tail;
    }

    void setTail(Node *tail) {
        LinkedList::tail = tail;
    }

    void addToHead(int data){
        Node* newNode = new Node(data);
        if(head == 0){
            head = tail = newNode;
        } else {
            newNode -> setNext(head);
            head = newNode;
        }
    }

    void addToTail(int data){
        Node* newNode = new Node(data);
        if(head == 0){
            head = tail = newNode;
        } else {
            tail ->setNext(newNode);
            newNode -> setNext(NULL);
            tail = newNode;
        }
    }

    void traversing(){
        Node* temp = head;
        while(temp != NULL){
            temp -> display();
            temp = temp -> getNext();
        }
    }

    Node* searching(int key){
        Node* temp = head;
        while(temp != NULL && temp -> getData() != key){
            temp = temp -> getNext();
        }
        return temp;
    }

    void addAfter(int data, int key){
        if(head == NULL || searching(key) == NULL){
            cout<<"not possible";
        } else {
            Node* newNode = new Node(data);
            Node* temp = head;
            while(temp != NULL && temp -> getData() != key){
            temp = temp -> getNext();
            }
            newNode -> setNext(temp -> getNext());
            temp -> setNext(newNode);
        }
    }

    void addBefore(int data, int key){
        if(head == 0 || searching(key) == 0){
            cout<<"not possible";
        } else {
            Node* newNode = new Node(data);
            Node* temp = head;
            Node* prev = NULL;
            while(temp != NULL && temp -> getData() != key){
            prev = temp;
            temp = temp -> getNext();
            }
            newNode -> setNext(prev -> getNext());
            prev -> setNext(newNode);
        }
    }

    void removeHead(){
        if(head == 0){
            cout<<"not possible";
        } else if (head == tail){
            head = tail = 0;
        } else {
            Node* temp = head;
            head = head -> getNext();
            delete temp;
        }
    }

    void removeTail(){
        if(head == NULL){
            cout<<"not possible"<<endl;
        } else if (head == tail){
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            Node* prev = NULL;
            while(temp -> getNext() != NULL){
                prev = temp;
                temp = temp -> getNext();
            }
            delete temp;
            temp = prev;
            temp -> setNext(NULL);
        }
    }

    void removeElement(int key){
        if(head == 0){
            cout<<"not possible"<<endl;
        } else if (head == tail){
            head = tail = 0;
        } else {
            Node* temp = head;
            Node* prev = NULL;
            while(temp != NULL && temp -> getData() != key){
                prev = temp;
                temp = temp -> getNext();
            }
            prev -> setNext(temp -> getNext());
            delete temp;
        }
    }
};

int main(){
    LinkedList l1;
    l1.addToHead(10);
    l1.addAfter(20,10);
    l1.traversing();
}
