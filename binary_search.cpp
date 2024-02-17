//binary search in an array:
#include <iostream>
using namespace std;
int main(){
  int array[] = {1,2,3,4,5};
  int size = sizeof(array)/sizeof(array[0]);
  
  int target;
  cout<<"enter target value to find in the array: ";
  cin>>target;

  int beginning = array[0];
  int ending = size-1;
  bool found = false;
  
  //calculating middle value:
  for(;beginning<=ending;){
    int middle = beginning+(ending-beginning)/2;
    if(array[middle]==target){
      cout<<"found at index: "<<middle;
      found = true;
      break;
    } else if(array[middle]<target){
      beginning = middle+1;
    } else {
      ending = middle-1;
    }
  }

  if(found == false){
    cout<<"element not available";
  }
}
