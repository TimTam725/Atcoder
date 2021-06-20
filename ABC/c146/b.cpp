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
  rep(i,s.size()){
    // cout<<s[i]+n-'0'<<endl;
    if(s[i]+n-'0'>42){
      s[i]=s[i]+n-26;
      // cout<<"iku"<<endl;
    }else{
      s[i]=s[i]+n;
    }
  }
  cout<<s<<endl;

  return 0;
}
