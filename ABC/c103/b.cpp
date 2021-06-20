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
  string s,t; cin>>s>>t;

  // int r=s.size()-1;
  // string rs;
  // rep(i,s.size()){
  //   rs+=s[s.size()-1-i];
  // }
  // cout<<"rs "<<rs<<endl;

  rep(i,s.size()){
    string s1=s.substr(0,s.size()-i);
    string s2=s.substr(s.size()-i,i);
    // cout<<s2+s1<<endl;
    if(s2+s1==t){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;

  return 0;
}
