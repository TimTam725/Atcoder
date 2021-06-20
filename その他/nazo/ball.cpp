#include<bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C;
  cin>>A>>B>>C;

  bool hand=false;
  for(int i=1;i<=B;i++){
    if((A*i)%B==C)
    hand=true;
  }

  if(hand==true)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

}
