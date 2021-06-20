#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n;
  cin>>n;

  vector<pl> a(n);
  for(int i=0;i<n;i++){
    int p;cin>>p;
    a[i]=make_pair(p,i+1);
  }
  sort(a.begin(),a.end());

  for(int i=0;i<n-1;i++)
  cout<<a[i].second<<" ";
  cout<<a[n-1].second<<endl;
}
