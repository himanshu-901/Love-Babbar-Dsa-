// convert fahrenhiet to celcius
/*
// c = (f-32)*5/9
#include<iostream>
using namespace std;
int main(){
	int f,c;
	cin>>f;
	c = (f-32)*5/9;
	cout<<"celcius is "<<c;
}
*/

// convert celcius to fehrenheit 

// f = (c*9/5) + 32
/*
#include<iostream>
using namespace std;
int main(){
	int f,c;
	cin>>c;
	f = (c*9/5)+32;
	cout<<"fehrenheit is "<<f;
}
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	char ID;
	cin>>T;
    while(T--){
    	
    	cin>>ID;
        if(ID=='B'|| ID=='b'){
            cout<<"BattleShip"<<endl;
        }
        if(ID=='C'|| ID=='c'){
            cout<<"Cruiser"<<endl;
        }
        if(ID=='D'|| ID=='d'){
            cout<<"Destroyer"<<endl;
        }
        if(ID=='F' || ID=='f'){
            cout<<"Frigate"<<endl;
        }
    }
	return 0;
}

