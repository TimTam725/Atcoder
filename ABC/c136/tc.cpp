#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int i;
  vector<int> H(N,0);
  for(i=0;i<N;i++)
  cin>>H.at(i);

  int maxa=H.at(0)-1;
  bool ans=1;
  for(i=0;i<N-1;i++){
    if(H.at(i)-1>H.at(i+1)||H.at(i+1)<maxa){
      ans=0;
      break;
    }
    if(maxa<H.at(i)-1)
    maxa=H.at(i)-1;
  }
  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
