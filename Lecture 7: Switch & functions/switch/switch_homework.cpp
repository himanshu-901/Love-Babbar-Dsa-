
#include<bits/stdc++.h>
using namespace std;
int main(){
// homework question

  int amount,rs100,rs50,rs20,rs1;
  cin>>amount;
  switch(1){
    case 1: rs100 = amount/100;
            amount = amount%100;
            cout<<"no of 100rs notes are"<<rs100<<endl;
    case 2: rs50 = amount/50;
            amount = amount%50;
            cout<<"no of 50rs notes are "<<rs50<<endl;
    case 3: rs20 = amount/20;
            amount = amount%20;
            cout<<"no of 20rs notes are "<<rs20<<endl;
    case 4: rs1 = amount/1;
            amount = amount%1;
            cout<<"no of 1rs notes are"<<rs1<<endl;
  }
}
