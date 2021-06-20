#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;

int main(){
  string s;
  cin>>s;

  int i;
  int n=s.size();
  int cnt=0;
  vector<int> ans(n,0);

  for(i=0;i<n;i++){
    if(s[i]=='R'){
      cnt++;
    }else{
      ans[i]+=cnt/2;
      ans[i-1]+=cnt/2;
      if(cnt%2!=0)
      ans[i-1]+=1;
      cnt=0;
    }
  }
  cnt=0;
  for(i=n-1;i>=0;i--){
    if(s[i]=='L'){
      cnt++;
    }else{
      ans[i]+=cnt/2;
      ans[i+1]+=cnt/2;
      if(cnt%2!=0)
      ans[i+1]+=1;
      cnt=0;
    }
  }

  for(i=0;i<n;i++)
  cout<<ans[i]<<(i==n-1?'\n':' ');
}
