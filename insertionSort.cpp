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

    //insertion sort:
    for(int i = 1; i < size; i++){
        int temp = array[i];
        int j;
        for(j = i - 1; j >= 0 && j > array[i]; j--){
            array[j+1] = temp;
        }
    }

    //outputting values:
    cout<<"Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout<<array[i];
    }
    cout<<endl;

    return 0;
}
