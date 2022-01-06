//bitwise operator

#include<iostream>
using namespace std;
int main(){
	int a=7;
	int b=6;
	int c = a&b; //and operator
	int d = a|b;  //or operator
	int e = a^b;  //xor operator
	cout<<c<<" "<<d<<endl;
	cout<<~a<<endl; // not operator
	cout<<e<<endl;
	cout<<(3<<2);//left shift operator for multiply
	cout<<(15>>2); //right shift operator for divide
	
	int f = (2*3/4)+5; //operator precedence
	cout<<f;
	return 0;
}
