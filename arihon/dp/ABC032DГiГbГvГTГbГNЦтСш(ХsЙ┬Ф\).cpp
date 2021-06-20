#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin>>N>>W;

  int i;
  vector<pair<int,int>> a(N);
  for(i=0;i<N;i++){
    int v,w;
    cin>>v>>w;
    a.at(i).first=v;
    a.at(i).second=w;
  }

  vector<pair<int,int>> A;
  vector<pair<int,int>> B;
  list<pair<long long,long long>> li;
  for(int bit=0;bit<(1<<N/2);bit++){
    long long v=0;
    long long w=0;
      for(i=0;i<N/2;i++){
        if(bit&(1<<i)){
          v+=a.at(i).first;
          w+=a.at(i).second;
        }
      }
      if(w<=W)

  }

}
