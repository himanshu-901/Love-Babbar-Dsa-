/*
#include<iostream>
using namespace std;
int main(){
	long int n, reverse=0, remainder;
	cout<<"enter your number"<<endl;            //reverse integer
	cin>>n;
	while(n!=0){
	
	remainder = n%10;
	reverse = 10 * reverse + remainder;
	n = n/10;
	}
	cout<<"reverse number = "<<reverse<<endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	cout<<"size of int "<<sizeof(int)<<endl;
	cout<<"size of float "<<sizeof(float)<<endl;
	cout<<"size of char "<<sizeof(char)<<endl;     //size of data type
	cout<<"size of boolean "<<sizeof(bool)<<endl;
	cout<<"size of double "<<sizeof(double)<<endl;
	cout<<"size of long "<<sizeof(long long)<<endl;

}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	cout<<"enter your  number";  //sum of natural numbers
	cin>>n;
	for(int i=1;i<=n;i++){
		sum= sum+i;
	}
	cout<<"sum of value is "<<sum;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int year;
	cin>>year;
	if(year%4==0){
		if(year%100 !=0){
			cout<<"year is lear year";
		}
		if(year%400 ==0){
			cout<<"year is leap year";
		}
		else{
			cout<<"not a leap year";
		}
	}
	else{
		cout<<"not a leap year";
	}
}
*/


