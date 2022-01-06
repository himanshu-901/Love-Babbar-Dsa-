// pattern
// rectangle * pattern
/*
#include<iostream>
using namespace std;
int main(){
	int i,j,r,c;
	cin>>r>>c;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int r,i,j;
	cin>>r;
	for(i=1;i<=r;i++){
		for(j=1;j<=r;j++){
			cout<<i;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int r;
	cin>>r;
	int i,j;
	for(i=1;i<=r;i++){
		for(j=1;j<=r;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int r,i,j;
	cin>>r;
	for(i=1;i<=r;i++){
		for(j=1;j<=r;j++){
			cout<<(r-j)+1;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main (){
	int count,n,i,j;
	cin>>n;
	count=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int count =1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<count<<" ";
			count = count + 1;
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	i=1;
	while(i<=n){
		j=1;
		int value = i;
		while(j<=i){
			cout<<value<<" ";	//sol_1 for this type with help of value variable
			value = value + 1;
			j = j+1;
		}
		cout<<endl;
		i = i+1;

}	}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<i+j-1<<" ";	//sol_2 for this type without help of value variable
		}
		cout<<endl;
	}
	}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;				//sol_1 for this type of question
	for(i=1;i<=n;i++){
		int value = i;
		for(j=1;j<=i;j++){
			cout<<value<<" ";
			value = value - 1;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;			      //sol_2 for this type of question without value variable
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<i-j+1<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n, i ,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			char ch='A' + i - 1;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,j,i;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			char ch = 'A' + j - 1;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	char value = 'A';
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			
			
			cout<<value<<" ";
			
			value = value+1;
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			char value = 'A'+i+j-2;
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			char value = 'A'+i-1;
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	char value = 'A';
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			char value = 'A'+i+j-2;
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		char value = 'A'+n-i;
		for(j=1;j<=i;j++){		
			
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		char value = 'A'+i-1;	//easy way of solving
		for(j=1;j<=n;j++){		
			
			cout<<value<<" ";
			value++;
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		//space print krlo abhi
		int space = n-i;
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			
			cout<<"*";
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=n;i>=1;i--){
		
		for(j=1;j<=i;j++){		
				
			cout<<"*";
			
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=n;i>=1;i--){
		//space print krlo abhi
		int space = n-i;
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			
			cout<<j<" ";
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=n;i>=1;i--){
		//space print krlo abhi
		int space = n-i;
		
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			int value = n-i+1;
			cout<<value;
			value++;
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=n;i>=1;i--){
		//space print krlo abhi
		int space = n-i;
		
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			int value = n-i+j;
			cout<<value;
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		//space print krlo abhi
		int space = n-i;
		
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			int value = i+j-1;
			cout<<value;
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++){
		//space print krlo abhi
		int space = n-i;
		
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			int value = i;
			cout<<value;
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int value = 1;
	for(i=1;i<=n;i++){
		//space print krlo abhi
		int space = n-i;
		
		while(space){
			cout<<" ";
			space--;
		}
		// star print krlo
		for(j=1;j<=i;j++){		
			
			cout<<value;
			value++;
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int j,i,n;
	cin>>n;
	i=1;
	while(i<=n){
		//print space
		int space = n-i;
		while(space){
			cout<<" ";
			space--;
		}
		// print 1st triangle
			j=1;
			while(j<=i){
				cout<<j;
				j++;
			}
			//print 2nd triangle
			int start = i-1;
			while(start){
				cout<<start;
				start--;
			}
			cout<<endl;
			i++;
	}
}
*/
//next homework final question


