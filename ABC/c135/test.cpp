#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  string s;
  cin>>s;

  int n=s.size();
  vector<vector<ll>> dp(n+1,vector<int>(12,0));

  int i;
  int k=1;
  for(i=n-1;i>=0;i--){
    if(s[i]=='?'){
      for(int j=0;j<13;j++){

      }
    }else{
      for(int j=0;j<13;j++){
        int in=s[i]-'0';
        in=(in*k)%13;
        in=(in+j)%13;
        dp[k][in]+=dp[k-1][j];
      }
    }
    k*=10;
  }

}
