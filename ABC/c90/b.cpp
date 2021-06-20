#include<bits/stdc++.h>
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

string kai(int a){
  string c;
  while(a>=10){
    c+=(a%10)+'0';
    a/=10;
  }
  // cout<<a<<endl;
  if(a!=0)
  c+=a+'0';
  return c;
}

int main(){
  int a,b; cin>>a>>b;

  int ans=0;
  for(int i=a;i<=b;i++){
    string s1=kai(i);
    string s2=s1;
    reverse(s1.begin(),s1.end());
     // cout<<s1<<" "<<s2<<endl;
    if(s1==s2)
    ans++;
  }
  cout<<ans<<endl;

  return 0;

}
