#include<bits/stdc++.h>
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
  string s; cin>>s;
  int k; cin>>k;
  set<string> se;
  rep(i,s.size()){
    for(int j=i;j<s.size();j++){
      if((j+1)-i>5) continue;
      string c=s.substr(i,(j+1)-i);
      se.insert(c);
    }
  }

  // vector<string> vs;
  int C=0;
  for(auto itr=se.begin();itr!=se.end();itr++){
    C++;
    if(C==k)
    cout<<*itr<<endl;
  }

  // sort(vs.begin(),vs.end());
  // cout<<vs[k-1]<<endl;
  return 0;
}
