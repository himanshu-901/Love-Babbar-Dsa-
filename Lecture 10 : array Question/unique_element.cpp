// unique element in array

#include<iostream>
using namespace std;

int unique(int arr[],int size){
  int ans = 0;
  for(int i=0;i<size;i++){
    ans = ans ^ arr[i];
  }
  return ans;
}

int main(){
  int arr[7] = {2,4,11,2,4,9,9};
  cout<<unique(arr,7);
}
