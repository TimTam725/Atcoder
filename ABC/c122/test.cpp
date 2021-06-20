#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int d[100005];

int main(){
  int n,q; cin>>n>>q;
  string s; cin>>s;
  int mc=0;
  rep(i,s.size()){
    if(s[i]=='A'&&s[i+1]=='C'&&i!=s.size()-1){
      d[i]=mc;mc++;
      d[i+1]=mc;
      i++;
    }else{
      d[i]=mc;
    }
  }

  vector<int> ans(q);
  rep(i,q){
    int l,r; cin>>l>>r;
    l--;r--;
    ans[i]=d[r]-d[l];
  }
  rep(i,q)
  cout<<ans[i]<<endl;

  // rep(i,s.size()){
  //   cout<<d[i]<<(i==s.size()-1?"\n":" ");
  // }

  return 0;
}
