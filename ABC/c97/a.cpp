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


int main(){
  int a,b,c,d; cin>>a>>b>>c>>d;
  if(abs(a-b)<=d&&abs(b-c)<=d||abs(a-c)<=d)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
  return 0;
}