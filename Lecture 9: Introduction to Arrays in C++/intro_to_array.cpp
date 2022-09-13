// array

#include<iostream>
using namespace std;

void printarray(int arr[],int size){
		cout<<"printing the array "<<endl;
		//print the array
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" printing done "<<endl;
}

int main(){
	int number[15];
	//accessing an array
	cout<<"value at 5 "<<number[5]<<endl;
//	cout<<"number at index[20] "<<number[20]<<endl;
	cout<<"everything is fine"<<endl;
	
	//initialising an array
	int second[3] = {5,7,11};
	cout<<"value at 2 index "<<second[2]<<endl;
	
	int third[15]={12,15};
	
	//print the array
	for(int i=0;i<15;i++){
		cout<<third[i]<<" ";
	}
	cout<<endl;
	
	
	// initializing all location with 0
	int fourth[10]={0};
	printarray(fourth,10);
	cout<<endl;
	
	//initializing all location with 1 is not possible
	int fifth[10]={1};
	//print array
	printarray(fifth,10);
	
	int fifthsize = sizeof(fifth)/sizeof(int);
	cout<<"size of fifth is "<<fifthsize<<endl;
	
	//different type of array
	
	char ch[5]={'a','b','c','d','e'};
//	cout<<ch[3]<<endl;
	cout<<"printing the char array "<<endl;
		//print the array
	for(char i=0;i<5;i++){
		cout<<ch[i]<<" ";
	}
	cout<<" printing done "<<endl;
}
