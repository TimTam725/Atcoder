#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;

  cin>>N;

  int i,j;
  vector<vector<int>> a(2,vector<int>(N));

  for(i=0;i<2;i++){
    for(j=0;j<N;j++)
    cin>>a.at(i).at(j);
  }

  vector<int> b(N);
  vector<int> c(N);

  b.at(0)=a.at(0).at(0);
  c.at(0)=a.at(0).at(0)+a.at(1).at(0);

  for(i=1;i<N;i++){
    b.at(i)+=(a.at(0).at(i)+b.at(i-1));
    c.at(i)+=(a.at(1).at(i)+max(b.at(i),c.at(i-1)));
  }

  // for(i=0;i<N-1;i++){
  //   cout<<b.at(i)<<" ";
  // }
  // cout<<b.at(N-1)<<endl;
  // for(i=0;i<N-1;i++){
  //   cout<<c.at(i)<<" ";
  // }
  // cout<<c.at(N-1)<<endl;

  cout<<c.at(N-1)<<endl;
}
