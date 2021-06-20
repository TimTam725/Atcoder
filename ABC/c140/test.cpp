#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n; cin>>n;
  vector<int> p(n);
  vector<int> index(n);
  rep(i,n) cin>>p[i];
  rep(i,n) p[i]--;
  rep(i,n) index[p[i]]=i;

  set<int> s;
  ll ans=0;
  for(int i=n-1;i>=0;i--){
    int x=index[i];
    s.insert(x);
    ll c=0;
    // cout<<"i "<<i<<" x "<<x<<endl;
    {
      vector<int> l(2,-1);
      vector<int> r(2,n);
      {
        auto it=s.find(x);
        rep(j,2){
          if(it==s.begin()) break;
          it--;
          l[j]=*it;
        }
      }
      {
        auto it=s.find(x);
        rep(j,2){
          it++;
          if(it==s.end()) break;
          r[j]=*it;
        }
      }
      vector<int> ls(2);
      vector<int> rs(2);
      ls[0]=index[i]-l[0]; ls[1]=l[0]-l[1];
      rs[0]=r[0]-index[i]; rs[1]=r[1]-r[0];
      c=(ll)ls[0]*rs[1]+(ll)ls[1]*rs[0];
    }
    // cout<<"c "<<c<<endl;
    ans+=c*(i+1);
  }

  cout<<ans<<endl;

  return 0;
}
