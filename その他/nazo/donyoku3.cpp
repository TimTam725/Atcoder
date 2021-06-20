#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,M;
  cin>>N>>M;

  vector<int> a(M);
  vector<int> b(M);
  for(int i=0;i<M;i++){
    cin>>a.at(i)>>b.at(i);
  }

  int cnt=0;
  int maxa=a.at(0);
  int minb=b.at(0);
  for(int i=0;i<M;i++){
    maxa=a.at(i);
    if(maxa>=minb){
      cnt++;
      minb=b.at(i);
    }
    else if(b.at(i)<=minb)
    minb=b.at(i);
    if(i==M-1)
    cnt++;
  }

  cout<<cnt<<endl;

}
