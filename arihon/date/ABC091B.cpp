#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
vector<string> s(101);
vector<string> t(101);

int main(){
  int N,M,i;
  map<string,int> ss;
  map<string,int> tt;
  set<string> jud;

  cin>>N;
  for(i=0;i<N;i++){
    cin>>s[i];
    jud.insert(s[i]);
    ss[s[i]]+=1;
  }
  cin>>M;
  for(i=0;i<M;i++){
    cin>>t[i];
    tt[t[i]]+=1;
  }

  int ans=0;
  for(auto itr=jud.begin();itr!=jud.end();itr++){
    // cout<<*itr<<endl;
    int a=ss[*itr]-tt[*itr];
    ans=max(a,ans);
  }
  cout<<ans<<endl;


}
