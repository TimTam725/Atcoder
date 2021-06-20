#include<bits/stdc++.h>
using namespace std;

int main(){

  int i,count;
  string a;

  cin>>a;

  count=0;
  for(i=0;i<3;i++){
    if(a.at(i)=='1')
    count++;
  }

  cout<<count<<endl;
}
