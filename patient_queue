#include <iostream>
using namespace std;
class pateint{
private:
string name;
int age;
string contact;
string reason;
public:
pateint(string name, int age, string contact, string reason){
this->name = name;
this->age = age;
this->contact = contact;
this->reason = reason;
}
void setName(string name){
this->name = name;
}
string getName(){
return name;
}
void setAge(int age){
this->age = age;
}
int getAge(){
return age;
}
void setContact(string contact){
this->contact = contact;
}
string getContact(){
return contact;
}
void setReason(string reason){
this->reason = reason;
}
string getReason(){
return reason;
}
void display(){
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Contact: " << contact << endl;
cout << "Reason: " << reason << endl;
cout << "----------------------" << endl;
}
};
class Node{
private:
pateint *data;
Node *next;
public:
Node(pateint *data){
this->data = data;
next = NULL;
}
void setData(pateint *data){
this->data = data;
}
pateint* getData(){
return data;
}
void setNext(Node *next){
this->next = next;
}
Node* getNext(){
return next;
}
void display(){
data->display();
}
};
class Queue{
private:
Node *front;
Node *rear;
public:
Queue(){
front = NULL;
rear = NULL;
}
void enqueue(pateint *data){
Node *newNode = new Node(data);
if(rear == NULL){
front = newNode;
rear = newNode;
}else{
rear->setNext(newNode);
rear = newNode;
}
}
void dequeue(){
if(front == NULL){
cout << "Queue is empty" << endl;
}else{
Node *temp = front;
front = front->getNext();
delete temp;
}
}
void display(){
if(front == NULL){
cout << "Queue is empty" << endl;
}else{
Node *temp = front;
while(temp != NULL){
temp->display();
temp = temp->getNext();
}
}
}
};
int main(){
Queue q;
int choice;
do{
cout << "1. Add pateint" << endl;
cout << "2. Remove pateint" << endl;
cout << "3. Display pateints" << endl;
cout << "4. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;
switch(choice){
case 1:{
string name, contact, reason;
int age;
cout << "Enter name: ";
cin >> name;
cout << "Enter age: ";
cin >> age;
cout << "Enter contact: ";
cin >> contact;
cout << "Enter reason: ";
cin >> reason;
pateint *p = new pateint(name, age, contact, reason);
q.enqueue(p);
break;
}
case 2:{
q.dequeue();
break;
}
case 3:{
q.display();
break;
}
case 4:{
cout << "Exiting..." << endl;
break;
}
default:{
cout << "Invalid choice" << endl;
}
}
}while(choice != 4);
return 0;
}
