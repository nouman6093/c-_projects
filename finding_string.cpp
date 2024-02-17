//finding string index from array.
#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter number of strings: ";
  cin>>size;
  string array[size];
  for(int i = 0; i < size; i++){
    cout<<"enter string: ";
    cin>>array[i];
  }
  cout<<endl;
  for(int i = 0; i < size; i++){
    cout<<array[i];
  }
  cout<<endl;
  string target;
  cout<<"enter target string: ";
  cin>>target;
  int index;
  bool found = false;
  for(int i = 0; i < size; i++){
    if(array[i]==target){
      index = i;
      found = true;
      break;
    }
  }
  if(found == true){
    cout<<"found string at index: "<<index;
  } else{
    cout<<"string not available";
  }
}
