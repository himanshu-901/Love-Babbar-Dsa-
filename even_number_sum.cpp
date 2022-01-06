//find sum ofeven number

#include<iostream>
using namespace std;
int main(){
	int n;
	int sum = 0;
	cin>>n;
	int i=2;
	while(i<=n){
		if(i%2==0){
			sum = sum + i;
		}
		i=i+1;
	}
	cout<<"sum of even number "<<sum;
}
