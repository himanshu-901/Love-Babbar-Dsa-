//how to initialize whole array with any value

#include<iostream>
using namespace std;
int main(){
	int i,val=1;
	int num[5];
	for(i=0;i<5;i++){
		num[i]=val;
	}
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
}
