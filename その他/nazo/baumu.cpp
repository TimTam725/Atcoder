#include<bits/stdc++.h>
using namespace std;
#include<set>
#include<stack>

int main(){
  int n,m;
  cin>>n>>m;

  vector<vector<int>> a(n,vector<int>(0));
  int i;
  for(i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    a.at(u-1).push_back(v-1);
    a.at(v-1).push_back(u-1);
  }
  vector<bool> memo(n,0);
  int cnt=0;
  for(i=0;i<n;i++){
    if(memo.at(i))
    continue;
    vector<bool> memo2(n,0);
    stack<int> s;
    bool chee=0;
    s.push(i);
    while(!(s.empty())){
      int x=s.top();
      bool check=0;
      memo2.at(x)=1;
      for(int j=0;j<a.at(x).size();j++){
        if(j==a.at(x).at(0)||memo.at(j))
        continue;
        if(memo2.at(a.at(x).at(j)))
        chee=1;
        s.push(a.at(x).at(j));
        memo2.at(x);
        check=1;
        break;
      }
      if(chee)
      break;
      if(!(check)){
        int d=s.top();
        s.pop();
        memo.at(d);
      }
    }
    if(!(chee))
    cnt++;

  }

}
