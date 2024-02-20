#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter size of array: ";
  cin>>size;
  int array[size];

  //inputting values:
  for(int i = 0; i < size; i++){
    cout<<"enter element: ";
    cin>>array[i];
  }

  //selection sort:
  for(int i = 0; i < size-1; i++){
    int minimum = i;
    for(int j = i + 1; j < size; j++){
      if(array[j]<array[minimum]){
        minimum = j;
      }
    }
    swap(array[minimum],array[i]);
  }

  //outputting values:
  for(int i = 0; i < size; i++){
    cout<<array[i];
  }
}
