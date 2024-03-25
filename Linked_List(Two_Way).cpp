#include <iostream>
using namespace std;

class DNode{
private:
    int data;
    DNode* next;
    DNode* prev;
public:
    DNode(int data){
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
    }

    int getData() const {
        return data;
    }

    void setData(int data) {
        DNode::data = data;
    }

    DNode *getNext() const {
        return next;
    }

    void setNext(DNode *next) {
        DNode::next = next;
    }

    DNode *getPrev() const {
        return prev;
    }

    void setPrev(DNode *prev) {
        DNode::prev = prev;
    }

    void display(){
        cout << "|(" << this->getPrev() << ")|(" << this << ")|(" << this->getData() << ")|(" << this->getNext() << ")|" << endl;
    }
};

class TwoWayLinkedList{
private:
    DNode* head;
    DNode* tail;
public:
    TwoWayLinkedList(){
        this -> head = NULL;
        this -> tail = NULL;
    }

    DNode *getHead() const {
        return head;
    }

    void setHead(DNode *head) {
        TwoWayLinkedList::head = head;
    }

    DNode *getTail() const {
        return tail;
    }

    void setTail(DNode *tail) {
        TwoWayLinkedList::tail = tail;
    }

    void addToHead(int data){
        DNode* newNode = new DNode(data);
        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode ->setPrev(NULL);
            newNode -> setNext(head);
            head ->setPrev(newNode);
            head = newNode;
        }
    }

    void addToTail(int data){
        DNode* newNode = new DNode(data);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail -> setNext(newNode);
            newNode ->setPrev(tail);
            newNode ->setNext(NULL);
            tail = newNode;
        }
    }

    void traversing(){
        DNode* temp = head;
        while(temp != NULL){
            temp -> display();
            temp = temp -> getNext();
        }
    }

    DNode* searching(int key){
        if(head == 0){
            cout<<"list is empty"<<endl;
        } else {
            DNode* temp = head;
            while(temp != NULL && temp -> getData() != key){
                temp = temp -> getNext();
            }
            return temp;
        }
    }

    void addAfter(int data, int key){
        DNode* newNode = new DNode(data);
        DNode* temp = head;
        while(temp != NULL && temp -> getData() != key){
            temp = temp -> getNext();
        }
        if(temp == NULL){
            cout<<"not possible"<<endl;
            delete newNode;
            return;
        } else if (temp -> getNext() == NULL){
            addToTail(data);
        } else {
            temp -> getNext() ->setPrev(newNode);
            newNode -> setNext(temp -> getNext());
            newNode -> setPrev(temp);
            temp -> setNext(newNode);
        }
    }

    void addBefore(int data, int key){
        DNode* newNode = new DNode(data);
        DNode* temp = head;
        while(temp != NULL && temp -> getData() != key){
            temp = temp -> getNext();
        }
        if(temp == NULL){
            cout<<"not possible"<<endl;
            delete newNode;
            return;
        } else if(temp -> getPrev() == NULL){
            addToHead(data);
        } else {
            newNode -> setNext(temp);
            newNode -> setPrev(temp -> getPrev());
            temp -> getPrev() ->setNext (newNode);
            temp -> setPrev(newNode);
        }
    }

    void removeHead(){
        if(head == 0){
            cout<<"not possible";
        } else if(head == tail){
            head = tail = NULL;
        } else {
            DNode* temp = head;
            head = head -> getNext();
            delete temp;
        }
    }

    void removeTail(){
        if(head == 0){
            cout<<"not possible"<<endl;
        } else if(head == tail){
            head = tail = NULL;
        } else {
            DNode* temp = tail;
            tail = tail -> getPrev();
            delete temp;
            tail ->setNext(NULL);
        }
    }

    void removeElement(int key){
        if(head == NULL){
            cout<<"list is empty"<<endl;
        } else if (searching(key) == NULL){
            cout<<"key not available"<<endl;
        } else if(searching(key) == head) {
            removeHead();
        } else if(searching(key) == tail){
            removeTail();
        } else {
            DNode* temp = head;
            while(temp != NULL && temp -> getData() != key){
                temp = temp -> getNext();
            }
            temp -> getPrev() -> setNext(temp -> getNext());
            temp -> getNext() ->setPrev(temp -> getPrev());
        }
    }
};

int main() {
    TwoWayLinkedList l1;
    l1.addToHead(10);
    l1.addAfter(15,10);
    l1.addToTail(20);
    l1.addBefore(18,20);
    l1.removeHead();
    l1.removeTail();
    l1.removeElement(18);
    l1.traversing();
}
