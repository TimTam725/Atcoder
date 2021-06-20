#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n;cin>>n;
  priority_queue<int> pq;
  vector<int> l(n);
  rep(i,n){
    int ll;cin>>ll;
    pq.push(ll);
    l[i]=-ll;
  }
  sort(l.begin(),l.end());

  rep(i,n){
    int t=pq.top();
    pq.pop();
    int t2=pq.top();
    
  }

  return 0;
}
