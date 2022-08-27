// decimal to biniary conversion using Bitwise operator - (>>,&)
//Approach no - 2

#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0){
      int bit = n&1;
      ans = (pow(10,i)*bit) + ans ;
      n = n>>1;
      i++;
    }
    cout<<ans;
    return 0;
}
