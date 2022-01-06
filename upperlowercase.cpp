//uppercase lowercase number print in char data type

/*
#include<iostream>
using namespace std;
int main(){
		char ch;
		cin>>ch;
		if(ch=='a'){                         //single character
			cout<<"this is lowercase";
		}
		else if(ch=='A'){
			cout<<"this is uppercase";
		}
		else if(ch=='1'){
			cout<<"this is number";
		}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"lowercase letter are :- "<<endl<<endl;
	for(ch='a';ch<='z';ch++){
		cout<<ch<<" ";
	}
	cout<<endl<<endl;								//all character
	cout<<"uppercase letter are :- "<<endl<<endl;
	for(ch='A';ch<='Z';ch++){
		cout<<ch<<" ";
	}
	cout<<endl<<endl;
	cout<<"numbers are ;- "<<endl<<endl;
	for(ch='1';ch<='9';ch++){
		cout<<ch<<" ";
	}
}
*/

#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z'){
		cout<<"lowercase letter";
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"uppercase letter";
	}
	else if(ch>='1' && ch<='9'){
		cout<<"numbers";
	}
}
	
