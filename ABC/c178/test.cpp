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
    if(p.size()>h.size())
    ans[i]=0;
    else{
      map<char,int> mpp;
      map<char,int> mpf;
      rep(j,p.size()-1){
        mpp[p[j]]++;
        mpf[h[j]]++;
      }
      int l=0;
      int r=p.size()-1;
      bool f=0;
      while(r<h.size()){
        mpp[p[r]]++;
        mpf[h[r]]++;
        bool chek=1;
        for(auto itr=mpp.begin();itr!=mpp.end();itr++){
          int id=itr->fs;
          if(mpp[id]!=mpf[id])
          chek=0;
        }
        if(chek)
        f=1;
        mpp[p[l]]--;
        mpf[h[l]]--;
        l++;
        r++;
      }
      if(f)
      ans[i]=1;
      else
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
