#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

int main(){
  int N;
  cin >> N;

  int k,i;
  vector<int> a(3*N);
  priority_queue<int,vector<int>,greater<int>> left;
  priority_queue<int> right;
  vector<ll> ansl(N+1,0);
  vector<ll> ansr(N+1,0);

  for(i=0;i<3*N;i++){
    cin>>a[i];
    if(i<N){
      ansl[0]+=a[i];
      left.push(a[i]);
    }else if(2*N<=i){
      ansr[N]+=a[i];
      right.push(a[i]);
    }
  }

  for(k=N;k<2*N;k++){
    //anslを求める
    left.push(a[k]);
    ll an=ansl[k-N]+a[k]-left.top();
    left.pop();
    ansl[k-N+1]=an;
    //ansrを求める
    int in=3*N-1-k;
    right.push(a[in]);
    ll an2=ansr[N-(k-N)]+a[in]-right.top();
    right.pop();
    ansr[N-(k-N)-1]=an2;
  }
  ll ans=-100000000000000;
  for(i=0;i<=N;i++){
    ll ann=ansl[i]-ansr[i];
    ans=max(ans,ann);
    // cout<<"l "<<ansl[i]<<" r "<<ansr[i]<<endl;
  }
  cout<<ans<<endl;

}
