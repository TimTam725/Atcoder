#include<bits/stdc++.h>
using namespace std;
#include<set>

int main(){
  int N,M;
  cin>>N>>M;

  vector<int> u(M);
  vector<int> v(M);

  int i;
  for(i=0;i<M;i++)
  cin>>u.at(i)>>v.at(i);

  stack<int> s;
  s.push(u.at(0));
  s.push(v.at(0));
  set<int> a;
  a.insert(u.at(0));
  a.insert(v.at(0));
  int cnt=1;
  int cntinsert=1;
  for(i=1;i<M;i++){
    if(!(a.count(u.at(i)))){
      cnt++;
      cout<<i<<" "<<u.at(i)<<endl;
    }
    a.insert(v.at(i));
    s.push(v.at(i));
    cntinsert++;
  }
  if((cntinsert+cnt)<N){
    cnt+=(N-(cntinsert+cnt));
  }

  

  cout<<cnt<<endl;

}
