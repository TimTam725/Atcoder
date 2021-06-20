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
  int t; cin>>t;
  vector<bool> ans(t);
  rep(i,t){
    string p,h; cin>>p>>h;
    // cout<<"i"<<endl;
    if(p.size()>h.size())
    ans[i]=0;
    else{
      int l=0;
      int r=p.size()-1;
      sort(ALL(p));
      bool f=1;
      // cout<<p<<endl;
      while(r<h.size()){
        string H=h.substr(l,p.size());
        sort(ALL(H));
        if(H==p){
          ans[i]=1;
          f=0;
          break;
        }
        l++;
        r++;
      }
      if(f)
      ans[i]=0;
    }
  }
  rep(i,t){
    if(ans[i])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
  return 0;
}
