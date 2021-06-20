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
  string s1,s2; cin>>s1>>s2;
  rep(i,3){
    if(s1[i]!=s2[2-i]){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;

  return 0;
}
