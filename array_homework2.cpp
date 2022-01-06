// print sum of all element in an array

#include<iostream>
using namespace std;
int main(){
	int i,size;
	int sum=0;
	cin>>size;
	int num[size]; //bad practise 
	for(i=0;i<size;i++){
		cin>>num[i];
	}
	for(i=0;i<size;i++){
		sum = sum + num[i];
	}
	cout<<" sum of array is "<<sum;
}
