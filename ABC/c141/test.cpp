#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n,m;
  cin>>n>>m;

  priority_queue<int> pq;
  ll ans=0;

  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    pq.push(a);
    ans+=a;
  }

  for(int i=0;i<m;i++){
    int to=pq.top();
    ans+=(to/2-to);
    pq.pop();
    pq.push(to/2);
  }

  cout<<ans<<endl;


}
