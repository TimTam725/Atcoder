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
  int n; cin>>n;
  deque<int> dq;
  rep(i,n){
    int a; cin>>a;
    if(i%2==0)
    dq.pb(a);
    else
    dq.push_front(a);
  }
  if(n%2!=0){
    for(auto itr=dq.end()-1;dq.begin()<=itr;itr--){
      cout<<*itr<<" ";
    }
  }else{
    for(auto itr=dq.begin();dq.end()!=itr;itr++){
      cout<<*itr<<" ";
    }
  }

  return 0;
}
