#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<int> a(n);
  rep(i,n) a[i]=i;
  a[0]=6;
  sort(a.begin(),a.end());
  // ☆昇順の配列の階上を全列挙
  do{
     rep(i,n)
     cout<<a[i]<<(i==n-1?"\n":" ");
  }while(next_permutation(a.begin(),a.end()));

  return 0;
}
