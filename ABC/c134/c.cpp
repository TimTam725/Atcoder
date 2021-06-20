#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n; cin>>n;
  vector<int> a(n);
  priority_queue<int> q;
  rep(i,n){
    cin>>a[i];
    q.push(a[i]);
  }
  rep(i,n){
    int ans;
    int t=q.top();
    if(a[i]==t){
      q.pop();
      ans=q.top();
      q.push(t);
    }else{
      ans=t;
    }
    cout<<ans<<endl;
  }
  return 0;
}
