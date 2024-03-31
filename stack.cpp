#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;   //creates stack
    s.push(1);  //input values
    s.push(2);
    s.push(3);
    cout << s.top() << endl;    //displays top value
    s.pop(); //removes top value
    cout<<s.top()<<endl;

    if(s.empty()){  //checks if stack is empty
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack is not empty"<<endl;
    }
    
    return 0;
}
