#include<bits/stdc++.h>
using namespace std;
#include<set>

int main(){

  int N,M;
  cin>>N>>M;

  vector<int> top;//木の数
  vector<vector<int>> a(N+1,vector<int>(0));//頂点の連結成分
  vector<vector<bool>> eda(N+1,vector<bool>(N+1,0));//枝をたどったか
  set<int> inorout;//親がいるかどうか

  int i;
  for(i=0;i<M;i++){
    int x,y;
    cin>>x>>y;

    bool jud=inorout.count(x);
    if(!(jud)){
      top.push_back(x);
    }
    inorout.insert(x);
    inorout.insert(y);
    a.at(x).push_back(y);
    a.at(y).push_back(x);
    eda.at(y).at(x)=1;
  }
  int cnt=top.size();

  for(i=1;i<N+1;i++){
    if(!(inorout.count(i)))
    cnt++;
  }
  // cout<<cnt<<endl;

  for(i=0;i<top.size();i++){
    stack<int> s;
    set<int> reached;//頂点に行ったか
    s.push(top.at(i));
    int prenumber=0;
    while(!(s.empty())){

      bool jud_2=false;//子要素に行ったか

      int b=s.top();
      cout<<"tyouten "<<b<<endl;
      for(int j=0;j<a.at(b).size();j++){

        int zahyo=a.at(b).at(j);
        // cout<<"eda "<<b<<" "<<j<<eda.at(b).at(zahyo)<<endl;
        if(!(eda.at(b).at(zahyo))){
          s.push(a.at(b).at(j));
          // cout<<"s.push("<<a.at(b).at(j)<<")"<<endl;
          prenumber=b;
          // cout<<"eda.at("<<prenumber<<").at("<<a.at(b).at(j)<<")"<<endl;
          eda.at(prenumber).at(a.at(b).at(j))=1;
          jud_2=true;
          break;
        }
      }
      if(!(jud_2)){
        cout<<"syori2"<<endl<<"reached.count("<<b<<")"<<reached.count(b)<<endl;
        if(reached.count(b)){
          // cout<<"reached "<<b<<endl;
          cnt--;
          break;
        }
        reached.insert(b);
        // cout<<"resched.insert("<<b<<")"<<endl;
        // cout<<"s.pop("<<s.top()<<")"<<endl;
        s.pop();
      }
    }
