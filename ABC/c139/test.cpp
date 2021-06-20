#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n;
  cin>>n;
  vector<int> h(n);
  for(int i=0;i<n;i++)
  cin>>h[i];

  int r=0;
  int l=0;
  int ans=0;
  while(l<n){
    int cnt=0;
    for(r=l;r<n-1;r++){
      if(h[r]>=h[r+1])
      cnt++;
      else
      break;
    }
    ans=max(ans,cnt);
    l=r+1;
  }

  cout<<ans<<endl;


}
