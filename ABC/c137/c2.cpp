#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

int main(){
  int n;
  cin>>n;

  map<string,int> mp;
  int ans=0;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    ans+=mp[s];
    mp[s]+=1;
  }
  cout<<ans<<endl;
}
