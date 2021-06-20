#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<pair<pair<string,int>,int>> p(n);
  rep(i,n){
    string s;
    int pp;
    cin>>s>>pp;
    p[i].first.first=s;
    p[i].first.second=-pp;
    p[i].second=i+1;
  }

  sort(p.begin(),p.end());
  rep(i,n)
  cout<<p[i].second<<endl;

  return 0;
}
