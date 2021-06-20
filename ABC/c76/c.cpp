#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const int INF=1000000001;
const double PI=3.141592653589;


int main(){
  string s,t; cin>>s>>t;
  vector<string> ans;
  for(int i=0;i+t.size()-1<s.size();i++){
    bool f=1;
    // cout<<"i "<<i<<endl;
    for(int j=i;j<i+t.size();j++){
      if(s[j]!='?'&&(s[j]!=t[j-i])){
        f=0;
        break;
      }
    }
    if(f){
      // cout<<"f ture"<<endl;
      string A;
      rep(k,s.size()){
        if(i<=k&&k<i+t.size()){
          A.pb(t[k-i]);
        }else if(s[k]=='?'){
          A.pb('a');
        }else{
          A.pb(s[k]);
        }
      }
      // cout<<"A "<<endl;
      ans.pb(A);
    }
  }
  if(ans.size()==0)
  cout<<"UNRESTORABLE"<<endl;
  else{
    sort(ALL(ans));
    cout<<ans[0]<<endl;
  }

  return 0;
}
