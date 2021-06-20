#include<bits/stdc++.h>
using namespace std;

int main(){
  string ss;
  string t;
  cin>>ss;
  cin>>t;

  int i,j,m;
  bool syori=0;
  for(i=0;i<ss.size();i++){
    // cout<<i<<endl;
    bool moji=0;
    if(ss.at(i)=='?'||ss.at(i)==t.at(0)){
      for(j=0;j<t.size();j++){
        if(i+j>=ss.size()){
          moji=0;
          break;
        }
        if(ss.at(i+j)=='?'||ss.at(i+j)==t.at(j)){
          moji=1;
        }
        else{
          moji=0;
          break;
        }
      }
    }
    if(moji){
      syori=1;
      m=i;
    }
  }

  if(syori){
    for(int k=0;k<t.size();k++){
      ss.at(m+k)=t.at(k);
    }
    for(int k=0;k<ss.size();k++){
      if(ss.at(k)=='?')
      ss.at(k)='a';
    }
    cout<<ss<<endl;
  }
  else
  cout<<"UNRESTORABLE"<<endl;

}
