//count how many times a target value has appeared in array:
#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter size of array: ";
  cin>>size;
  int array[size];
  for(int i = 0; i < size; i++){
    cout<<"enter element:  ";
    cin>>array[i];
  }
  for(int i = 0; i < size; i++){
    cout<<array[i];
  }
  cout<<endl;
  int target;
  cout<<"enter target value: ";
  cin>>target;
  int count = 0;
  for(int i = 0; i < size; i++){
    if(array[i]==target){
      count++;
    }
  }
  cout<<"target element appeared for "<<count<<" number of times.";
}
