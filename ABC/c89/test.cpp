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

int bitCount(int bits) {
    int cnt = 0;
    for(int mask = 1; mask != 0; mask<<=1) {
        if( (bits & mask) != 0 )
            ++cnt;
    }
    return cnt;
}

int main(){
  int n; cin>>n;
  map<char,int> mp;
  rep(i,n){
    string a; cin>>a;
    if(a[0]=='M'||a[0]=='A'||a[0]=='R'||a[0]=='C'||a[0]=='H'){
      mp[a[0]]++;
    }
  }
  char d[5]={'M','A','R','C','H'};
  ll ans=0;
  for(int bit=0;bit<(1<<5);bit++){
    int bc=bitCount(bit);
    if(bc!=3) continue;
    ll c=1;
    rep(i,5){
      if((bit&(1<<i))!=0)
      c*=mp[d[i]];
    }
    ans+=c;
  }
  cout<<ans<<endl;

  return 0;

}
