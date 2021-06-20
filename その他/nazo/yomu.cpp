#include<bits/stdc++.h>
using namespace std;
#include<fstream>

#define F "output.cnf"

int main(){
  ifstream ifs(F);
  string str;
  vector<string> s(1,"a");
  string str2="a";
  int i=0;
  ifs>>str;
  while(s.at(i)!="0"){
    ifs>>str2;
    if(ifs.fail())
    cout<<"読み込みに失敗しました。"<<endl;
    s.push_back(str2);
    i++;
  }
  vector<vector<char>> ans(9,vector<char>(9));
  for(i=1;i<s.size()-1;i++){
    if(s.at(i).at(0)!='-'){
      // cout<<"syori"<<endl;
      int x=s.at(i).at(0)-'0';
      int y=s.at(i).at(1)-'0';
      // cout<<x<<" "<<y<<endl;
      ans.at(x-1).at(y-1)=s.at(i).at(2);
      // cout<<ans.at(x-1).at(y-1)<<endl;
    }
  }
  for(i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cout<<ans.at(i).at(j);
    }
    cout<<endl;
  }

}
