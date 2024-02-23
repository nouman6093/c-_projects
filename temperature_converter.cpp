#include<iostream>
using namespace std;
int main(){
    //temperature conversion:

    int choice;
    float fahrenheight;
    float celcius;
    cout<<"Press 1 to convert Celcius to Fahrenheight\n";
    cout<<"Press 2 to convert Fahrenheight to Celcius\n";
    cin>>choice;
    switch(choice){
case 1:
    cout<<"enter temperature in celcius: ";
    cin>>celcius;
    fahrenheight = (celcius*9/5)+32;
    cout<<"temperature is: "<<fahrenheight<<endl;
    break;
case 2:
    cout<<"enter temperature in fahrenheight: ";
    cin>>fahrenheight;
    celcius = (fahrenheight - 32) * 5/9;
    cout<<"temperature is: "<<celcius<<endl;
    break;
default:
    cout<<"Please enter either 1 or 2";
    break;
    }

    return 0;
}
