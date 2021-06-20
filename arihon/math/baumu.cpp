#include<bits/stdc++.h>
using namespace std;
#include<set>
#include<stack>

int main(){
  int n,m;
  cin>>n>>m;

  vector<vector<int>> a(n,vector<int>(0));
  int i,j;
  for(i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    a.at(u-1).push_back(v-1);
    a.at(v-1).push_back(u-1);
  }

  vector<bool> memo(n,0);
  vector<int> prenod(n);
  int cnt=0;
  for(i=0;i<n;i++){
    cout<<"tyouten i "<<i<<endl;
    if(memo.at(i))
    continue;
    if(a.at(i).size()==0){
      cnt++;
      continue;
    }
    vector<bool> memo2(n,0);
    stack<int> s;
    bool chee=0;
    s.push(i);
    prenod.at(i)=i;
    while(!(s.empty())){
      int x=s.top();
      cout<<"imamiteru nod x "<<x<<endl;
      bool check=0;
      for(int j=0;j<a.at(x).size();j++){
        int xtonod=a.at(x).at(j);
        cout<<"xtonod "<<xtonod<<endl;
        if(xtonod==prenod.at(x)||memo.at(xtonod))
        continue;
        if(memo2.at(xtonod)){
          cout<<"memo2.at(xtonod) "<<memo2.at(xtonod)<<endl;
          chee=1;
        }
        s.push(xtonod);
        memo2.at(x);
        prenod.at(xtonod)=x;
        check=1;
        break;
      }
      if(chee){
        cout<<"chee"<<endl;
        break;
      }
      if(!(check)){
        cout<<"check"<<endl;
        int d=s.top();
        s.pop();
        memo.at(d);
      }
    }
    if(!(chee))
    cnt++;

  }

  cout<<cnt<<endl;

}
