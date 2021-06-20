#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

// char al(char zz,int n){
//
// }

int main(){
  int n; cin>>n;
  string s; cin>>s;

// s[i]-'A'はint型で帰って来る
  rep(i,s.size()){
    s[i]=(s[i]-'A'+n)%26+'A';
    cout<<s[i]<<endl;
  }

  return 0;
}
