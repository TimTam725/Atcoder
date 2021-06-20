#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const int INF=1000000001;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  for(int bit=0;bit<(1<<3);bit++){
    int sum=s[0]-'0';
    for(int i=0;i<3;i++){
      int C=(1<<i)&bit;
      if(C!=0){
        sum+=s[i+1]-'0';
      }else{
        sum-=s[i+1]-'0';
      }
    }
    // cout<<bitset<8>(bit)<<endl;
    // cout<<sum<<endl;
    if(sum==7){
      string S;
      rep(i,3){
        S+=s[i];
        int C=(1<<i)&bit;
        if(C!=0)
        S+='+';
        else
        S+='-';
      }
      S+=s[3];
      S+="=7";
      cout<<S<<endl;
      return 0;
    }
  }

  return 0;
}
