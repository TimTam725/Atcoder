#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,count0,count1;
  string S,s;

  cin>>S;
  s=S;
  count0=0;
  count1=0;
  if(S.at(0)=='1')
  count0++;
  s.at(0)='0';

  for(i=1;i<s.size();i++){
    if(s.at(i-1)==s.at(i)){
      if(s.at(i-1)=='0')
      s.at(i)='1';
      else
      s.at(i)='0';
      count0++;
    }
  }

  s=S;
  if(S.at(0)=='0')
  count1++;
  s.at(0)='1';
  for(i=1;i<s.size();i++){
    if(s.at(i-1)==s.at(i)){
      if(s.at(i-1)=='0')
      s.at(i)='1';
      else
      s.at(i)='0';
      count1++;
    }
  }


  cout<<min(count0,count1)<<endl;
}
