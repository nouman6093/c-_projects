//minimum value:
#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter size of array: ";
  cin>>size;
  int array[size];
  for(int i = 0; i < size; i++){
    cout<<"enter element: ";
    cin>>array[i];
  }
  int min = array[0];
  for(int i = 0; i < size; i++){
    if(array[i]<min){
      min = array[i];
    }
  }
  cout<<"minimum value is: "<<min;
}
