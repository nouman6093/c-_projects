#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int* array = new int[size];

    //inputting values:
    for(int i = 0; i < size; i++){
        cout<<"Enter Element: ";
        cin>>array[i];
    }

    //bubble sort:
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

    //outputting values:
    for(int i = 0; i < size; i++){
        cout<<array[i];
    }
    cout<<endl;

    return 0;
}
