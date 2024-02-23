#include<iostream>
using namespace std;
int main(){
    //Write a C++ program that calculates the volume of a cube.

    int length;
    cout<<"enter value of length: ";
    cin>>length;

    float volume = length * length * length;

    cout<<"Volume of Cube is: "<<volume<<endl;

    return 0;
}
