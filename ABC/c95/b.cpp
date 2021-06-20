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
  int n,x; cin>>n>>x;
  vector<int> m(n);
  int ans=0;
  int mini=INF;
  rep(i,n){
    cin>>m[i];
    ans+=m[i];
    mini=min(mini,m[i]);
  }

  int c=n;
  x-=ans;
  c+=(x/mini);
  cout<<c<<endl;


  return 0;

}
