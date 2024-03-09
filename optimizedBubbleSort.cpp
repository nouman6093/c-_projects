#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int* array = new int[size];

    //inputting values:
    for(int i = 0; i < size; i++){
        cout<<"Enter element: ";
        cin>>array[i];
    }

    //optimized bubble sort:
    for(int i = 0; i < size - 1; i++){
        int flag = 0;
        for(int j = 0; j < size - i - 1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    //outputting values:
    for(int i = 0; i < size; i++){
        cout<<array[i];
    }
}
