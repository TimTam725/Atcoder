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
  rep(i,s.size()){
    int size=s.size()-i;
    if(size%2!=0||i==0) continue;
    string a=s.substr(0,size/2);
    string b=s.substr(size/2,size/2);
    // cout<<a<<" "<<b<<endl;
    if(a==b){
      cout<<size<<endl;
      return 0;
    }
  }

  return 0;
}
