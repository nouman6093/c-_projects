#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter size of array: ";
  cin>>size;
  int array[size];
  for(int i = 0; i < size; i++){
    cout<<"enter array element ["<<i+1<<"]: ";
    cin>>array[i];
  }
  for(int i = 0; i < size; i++){
    cout<<array[i]<<endl;
  }
  cout<<endl;
  int target;
  cout<<"enter target value from array: ";
  cin>>target;
  int index;
  bool found = false;
  for(int i = 0; i < size; i++){
    if(array[i]==target){
      found = true;
      index = i;
      break;
    }
  }
  if(found == true){
    cout<<"found at index: "<<index;
  } else if(found == false){
    cout<<"element not available";
  }
}
