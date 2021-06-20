#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n,k,q;
  cin>>n>>k>>q;

  vector<int> s(n,k-q);
  int i;
  for(i=0;i<q;i++){
    int a;
    cin>>a;
    s[a-1]++;
  }

  for(i=0;i<n;i++){
    if(s[i]>0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }


}
