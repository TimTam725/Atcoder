#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;

  cin>>N;
  cin>>S;

  int i;
  int cnt=0;
  vector<int> a;

  char now='E';
  for(i=0;i<S.size();i++){
      if(S.at(i)==now)
      cnt++;
      else{
      a.push_back(cnt);
      if(now=='E')
      now='W';
      else
      now='E';
      cnt=1;
    }
  }
  a.push_back(cnt);
  if(now=='W')
  a.push_back(0);

  int sumE,sumW,min;
  sumW=0;
  min=N;
  for(i=0;i<a.size();i+=2){
    sumE+=a.at(i);
  }

  for(i=0;i<a.size();i++){
    if(i%2==0){
      sumE-=a.at(i);
    }
    else{
      sumW+=a.at(i);
    }
    if(min>sumE+sumW)
    min=sumE+sumW;
  }

  cout<<min<<endl;
  // for(i=0;i<a.size()-1;i++)
  // cout<<a.at(i)<<" ";
  // cout<<a.at(a.size()-1)<<endl;
}
