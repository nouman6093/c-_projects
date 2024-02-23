#include<iostream>
using namespace std;
int main(){
    //Write a C++ program that calculates the volume of a cylinder.
    int radius;
    cout<<"enter radius: ";
    cin>>radius;

    int height;
    cout<<"enter height: ";
    cin>>height;

    int volume = 3.14 * radius * radius * height;

    cout<<"volume is: "<<volume<<endl;

    return 0;
}
