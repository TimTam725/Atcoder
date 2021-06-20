#include<bits/stdc++.h>
using namespace std;

int main(){

  long long x,y;
  cin>>x>>y;

  int cnt=0;
  long long a=x;

  while(a<=y){
    cnt++;
    a*=2;
  }
  cout<<cnt<<endl;
}
