#include<bits/stdc++.h>
using namespace std;
#include<set>

int main(){
  int N,M;
  cin>>N>>M;

  int i,cnt;
  cnt=0;
  set<int> under;
  vector<vector<bool>> a(N,vector<bool>(N,0));
  for(i=0;i<M;i++){
    int x,y,z;
    cin>>x>>y>>z;
    a.at(x-1).at(y-1)=1;
  }
  cout<<"syori"<<endl;
  for(i=0;i<N;i++){
    if(under.count(i)==0)
    cnt++;
    for(int j=i;j<N;j++){
      if(a.at(i).at(j))
      under.insert(j);
    }
  }

  cout<<cnt<<endl;

}
