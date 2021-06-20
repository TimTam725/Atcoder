#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
vector<int> d(101);

int main(){
  int N;
  cin >> N;

  int i;
  set<int> s;
  for(i=0;i<N;i++){
    cin>>d[i];
    s.insert(d[i]);
  }
  int ans=s.size();

  cout<<ans<<endl;

}
