#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i;
  cin>>n;
  vector<pair<pair<string,int>,int>> a(n);
  for(i=0;i<n;i++){
    string str;
    int l;
    cin>>str>>l;
    a.at(i).first.first=str;
    a.at(i).first.second=-l;
    a.at(i).second=i+1;
  }

//配列aの最初の要素でsortし、同じ場合は次の要素で比較
//3つ以上の情報を保持できる tupleも有効
// vector<tuple<ll,ll,ll>> t(n);
// rep(i,n){
//   ll x,y,h; cin>>x>>y>>h;
//   get<0>(t[i])=h;
//   get<1>(t[i])=x;
//   get<2>(t[i])=y;
// }
  sort(a.begin(),a.end());

  for(i=0;i<n;i++){
    cout<<a.at(i).second<<endl;
  }


}
