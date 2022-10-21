#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
  int s=0;
  int e=v.size()-1;
  while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
  }
  return v;
}

...
