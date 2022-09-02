// Set Bit 

#include <bits/stdc++.h>
using namespace std;

int setbit(int a, int b){
  int count = 0;
  int count1 = 0;
  while(a&&b!=0){
  
  if(a&1==1) count++;
  a= a>>1;
  if(b&1==1) count1++;
  b = b>>1;
    }
  return count + count1;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<setbit(a,b);
}
