// max and min in an array

#include<iostream>
using namespace std;
int maxarray(int num[], int n){
	int maxi = INT_MIN;
	for(int i=0;i<n;i++){
		maxi = max(maxi,num[i]);
		
		//if(num[i]>max){
		//	max=num[i];
		//}
	}
	return maxi;
}

int minarray(int num[], int n){
	int mini = INT_MAX;
	for(int i=0;i<n;i++){
		mini = min(mini,num[i]);
		
		//if(num[i]<min){
		//	min=num[i];
		//}
	}
	return mini;
}

int main(){
	int size;
	cout<<" enter size u want in array "<<endl;
	cin>>size;
	
	int number[100];
	for(int i=0;i<size;i++){
		cin>>number[i];
	}
	cout<<"max value is "<<maxarray(number,size)<<endl;
	cout<<"min value is "<<minarray(number,size)<<endl;
}
