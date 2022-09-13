
// reverse an array

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void swap(int arr[],int n){
  int start = 0;
  int end = n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){
  int arr[6] = { 3,4,5,6,7,8};
  int arr1[5] = {1,3,5,7,9};

  swap(arr,6);
  swap(arr1,5);

  printArray(arr,6);
  printArray(arr1,5);
}
