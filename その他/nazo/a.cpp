#include<bits/stdc++.h>
using namespace std;

int main(){
  float A,B,T;

  cin>>A>>B>>T;

  T+=0.5;

  int i,sum;

  sum=0;
  for(i=1;A*i<=T;i++){
    sum+=B;
  }

  cout<<sum<<endl;

}
