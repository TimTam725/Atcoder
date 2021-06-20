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

int a[100005];
bool memo[100005];

int bot(int u,int c){
  if(memo[u]) return 0;
  memo[u]=1;
  int to=a[u];
  c++;
  if(to==1)
  return c;
  else
  return bot(to,c);
}

int main(){
  int n; cin>>n;
  rep(i,n){
    int A; cin>>A;
    A--;
    a[i]=A;
  }
  int c=0;
  int ans=bot(0,c);
  if(ans==0)
  cout<<-1<<endl;
  else
  cout<<ans<<endl;

  return 0;
}
