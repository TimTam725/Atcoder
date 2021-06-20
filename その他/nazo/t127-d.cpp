#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;

  vector<int> a(n);
  vector<pair<int,int>> p(m);
  int i,j;
  long long sum=0;
  for(i=0;i<n;i++){
    cin>>a.at(i);
    sum+=a.at(i);
  }
  for(i=0;i<m;i++){
    int b,c;
    cin>>b>>c;
    p.at(i).first=c;
    p.at(i).second=b;
  }

  sort(a.begin(),a.end());
  sort(p.begin(),p.end(),greater<pair<int,int>>());

  int left=0;
  int right=n;
  for(i=0;i<m;i++){
    bool jud=0;
    right=left+p.at(i).second;
    if(right>n)
    right=n;
    // cout<<i<<" left "<<left<<" right "<<right<<endl<<"p.first "<<p.at(i).first<<endl;
    for(j=left;j<right;j++){
      if(p.at(i).first<a.at(j)){
        jud=1;
        break;
      }
      else{
        sum-=a.at(j);
        sum+=p.at(i).first;
      }
      // cout<<"j "<<j<<" sum "<<sum<<endl;
    }
    left=right;
    if(jud)
    break;
  }
  cout<<sum<<endl;
  // for(i=0;i<m;i++)
  // cout<<i<<" f "<<p.at(i).first<<" s "<<p.at(i).second<<endl;

}
