#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin>>N;

  // vector<string> s(N);
  unorderd_map<string,int> mp;
  int i;
  for(i=0;i<N;i++){
    string ss;
    cin>>ss;
    sort(ss.begin(),ss.end());
    mp[ss]++;
    // cout << mp[ss] <<endl;
    // s.at(i)=ss;
  }
  ll ans = 0;
  for (auto& p : mp){
    ll c = p.second;
    ans += c*(c-1)/2;
  }
  // sort(s.begin(),s.end());
  // for(i=0;i<N;i++){
  //   cout<<s.at(i)<<endl;
  // }


  // int top=0;
  // int bottom=0;
  // long long ans=0;
  // while(top<N){
  //   int n=0;
  //   bottom=top;
  //   // cout<<"top "<<top<<" bot "<<bottom<<endl;
  //   while(bottom+1<N){
  //     if(s.at(bottom+1)==s.at(top)){
  //       bottom++;
  //       n++;
  //     }else{
  //       break;
  //     }
  //   }
  //   if(n>=1){
  //     ans+=(n+1)*n/2;
  //   }
  //   top=bottom+1;
  //
  //   // cout<<ans<<endl;
  // }
  cout<<ans<<endl;


}
