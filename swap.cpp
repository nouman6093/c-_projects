#include<iostream>
using namespace std;
int main(){
    //swapping:
    int n1;
    cout<<"enter first n: ";
    cin>>n1;

    int n2;
    cout<<"enter second n: ";
    cin>>n2;

    cout<<"before swapping values are: "<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;

    cout<<"after swapping values are: "<<endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<n1<<endl;
    cout<<n2<<endl;

    return 0;
}
