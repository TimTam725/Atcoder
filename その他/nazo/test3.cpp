#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,c;

  cin>>n;

  vector<int> x(n);

  for(i=0;i<n;i++)
  cin>>x.at(i);

  c=0;
  i=0;

  while(i<n){
    if(x.at(i)%2==0){
      x.at(i)/=2;
      i++;
    }
    else{
      cout<<c<<endl;
      break;
    }
    if(i==n-1){
      i=0;
      c++;
    }
  }

}
