#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  // cout<<s[0]-'a'<<endl;
  //  rep(i,s.size())
  // cout<<s[i]-'a'<<endl;
  bool c=1;
  if(s[0]!='A')
  c=0;
  int index;
  int count=0;
  rep(i,s.size()){
    if(2<=i&&i<=(s.size()-2)){
      if(s[i]=='C'){
        count++;
        index=i;
      }
    }
  }
  if(count!=1){
    c=0;
    // cout<<"count"<<endl;
  }else{
    rep(i,s.size()){
      if(i!=0&&i!=index){
        // cout<<s[i]-'A'<<endl;
        if(s[i]-'a'<0){
          c=0;
          // cout<<"omojji"<<endl;
        }
      }
    }
  }
  if(c)
  cout<<"AC"<<endl;
  else
  cout<<"WA"<<endl;

  return 0;
}
