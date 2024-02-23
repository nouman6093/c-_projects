#include<iostream>
using namespace std;
int main(){
    //Write a C++ program that calculates the volume of a sphere.

    int radius;
    cout<<"enter radius of sphere: ";
    cin>>radius;

    float volume = (4/3)*3.12*radius*radius*radius;

    cout<<"volume of sphere is: "<<volume;

    return 0;
}
