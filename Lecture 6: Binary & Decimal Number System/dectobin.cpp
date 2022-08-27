// decimal to biniary conversion using arithmetic operators - (% and /)

#include <iostream>
using namespace std;

int main() 
{
    int n,ans=0,i=0;
    cin>>n;
    int array[n];
    
    while(n!=0)
    {
      array[i] = n%2;
      n = n/2;
      i++;
    }
    for(int j=i-1;j>=0;j--)
    {
      cout<<array[j];
    }
    return 0;
}
