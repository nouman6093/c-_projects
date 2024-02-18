#include <iostream>
using namespace std;
int main(){
  //inputting array size:
  int size;
  cout<<"enter size of array: ";
  cin>>size;

  //declaring array:
  int array[size];

  //inputting array elements:
  for(int i = 0; i < size; i++){
    cout<<"enter element: ";
    cin>>array[i];
  }

  //outputting array elements:
  for(int i = 0; i < size; i++){
    cout<<array[i];
  }
  cout<<endl;

  //inputting target value to find:
  int target;
  cout<<"enter target value to find: ";
  cin>>target;

  //binarry search:
  int beginning = array[0];
  int ending = array[size-1];
  int index = 0;
  int found = false;
  for(;beginning<=ending;){
    int middle = (beginning+ending)/2;
    if(array[middle] == target){
      index = middle;
      found = true;
      break;
    } else if (array[middle]>target){
      ending = middle - 1;
    } else if(array[middle<target]){
      beginning = middle + 1;
    }
  }

  //if else:
  if(found == true){
    cout<<"found at index: "<<index;
  } else if(found == false){
    cout<<"element not available";
  }
}
