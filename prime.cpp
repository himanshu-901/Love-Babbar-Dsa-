// print prime number
/*
#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	i=2;
	while(i<n){
		if(n%i!=0){
			cout<<" is a prime number"<<endl;
		}
		else{
			cout<<" not a prime number"<<endl;
		}
		i =i+1;
	}
}
*/

#include<iostream>
using namespace std;
int main(){
	int i,n;
	bool flag=0;
	cin>>n;
	i=2;
	while(i<n){
		if(n%i==0){
			cout<<"not a prime number";
			flag=1;
			break;
		}
		
		i=i+1;
	}
	if(flag==0){
			cout<<"prime number";
		}
	return 0;
}
