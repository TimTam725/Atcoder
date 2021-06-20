#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

int main(){
  int N,K;
  cin>>N>>K;

  priority_queue<pl,vector<pl>,greater<pl>> que;
  int i;
  for(i=0;i<N;i++){
    int a,b;
    cin>>a>>b;
    que.push(make_pair(a,b));
  }
  // for(i=0;i<N;i++){
  //   cout<<que.top().first<<" "<<que.top().second<<endl;
  //   que.pop();
  // }
  int cnt=0;
  ll time=0;
  bool chek=0;
  while(!(chek)){
    int k=1;
    pl top=que.top();
    // cout<<top.first<<" "<<top.second<<endl;
    que.pop();
    pl top2=que.top();
    ll tim=top.first;
    while(top.first+(k-1)*top.second<=top2.first){
      k++;
      tim+=top.first+(k-1)*top.second;
      if(cnt+k-1==K){
        chek=1;
        break;
      }
    }
    k--;
    cnt+=k;
    time+=tim-(top.first+k*top.second);
    // cout<<"tim "<<tim-(top.first+k*top.second)<<endl;
    //   cout<<"k "<<k<<" cnt "<<cnt<<" time "<<time<<endl;
    que.push(make_pair(top.first+k*top.second,top.second));
  }
  cout<<time<<endl;

}
