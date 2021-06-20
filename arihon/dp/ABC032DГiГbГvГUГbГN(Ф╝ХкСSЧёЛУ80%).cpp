#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll nibun(vector<pair<ll,ll>> &a,ll w){
  ll r=a.size()-1;
  ll l=0;
  ll ans;
  while(r-l!=1){
    int mid=(r+l)/2;
    // cout<<"l "<<l<<"r "<<r<<" mid "<<mid<<endl;
    if(a.at(mid).first<=w){
      l=mid;
    }else{
      r=mid;
    }
  }
  if(l==0){
    if(a.at(0).first>w)
    ans=0;
    else
    ans=a.at(0).second;
  }else if(r==a.size()-1){
    if(a.at(r).first<=w)
    ans=a.at(r).second;
    else
    ans=a.at(l).second;
  }else{
    ans=a.at(l).second;
  }

  return ans;
}

int main(){
  int N,W;
  cin>>N>>W;

  vector<pair<int,int>> a(N);
  int i,j;
  for(i=0;i<N;i++){
    int v,w;
    cin>>v>>w;
    a.at(i).first=v;
    a.at(i).second=w;
  }

  if(N<=30){
    vector<pair<ll,ll>> A;
    for(int bit=0;bit<(1<<N/2);bit++){
      ll v=0;
      ll w=0;
      for(i=0;i<N/2;i++){
        if(bit&(1<<i)){
          v+=a.at(i).first;
          w+=a.at(i).second;
        }
      }
      if(w<=W)
      A.push_back(make_pair(w,v));
    }

    sort(A.begin(),A.end());
    ll prew=A.at(0).first;
    ll prev=A.at(0).second;
    for(i=1;i<A.size();i++){
      if(prew<=A.at(i).first&&prev>=A.at(i).second){
        A.erase(A.begin()+i);
      }else{
        prew=A.at(i).first;
        prev=A.at(i).second;
      }
    }

    vector<pair<ll,ll>> B;
    for(int bit=0;bit<(1<<N-N/2);bit++){
      ll v=0;
      ll w=0;
      for(i=0;i<N-N/2;i++){
        if(bit&(1<<i)){
          v+=a.at(i+N/2).first;
          w+=a.at(i+N/2).second;
        }
      }
      if(w<=W)
      B.push_back(make_pair(w,v));
    }
    // cout<<"A"<<endl;
    // for(i=1;i<A.size();i++){
    //   cout<<"w "<<A.at(i).first<<" v "<<A.at(i).second<<endl;
    // }
    // cout<<"B"<<endl;
    // for(i=1;i<B.size();i++){
    //   cout<<"w "<<B.at(i).first<<" v "<<B.at(i).second<<endl;
    // }

    ll ans=0;
    for(i=0;i<B.size();i++){
      // cout<<"B w "<<B.at(i).second<<endl;
      ll c=W-B.at(i).first;
      ll b=nibun(A,c)+B.at(i).second;
      ans=max(ans,b);
    }
    cout<<ans<<endl;
  }

}
