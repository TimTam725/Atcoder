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
const ll LMAX=1000000000000001;


int main(){
  int n; cin>>n;
  string s; cin>>s;
  int c=0;
  for(int i=0;i<n-2;i++){
    if(s[i]=='A'){
      if(s[i+1]=='B'&&s[i+2]=='C')
      c++;
    }
  }
  cout<<c<<endl;

  return 0;
}
