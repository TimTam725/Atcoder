#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin>>N;

  vector<tuple<int,int,int>> a(N);

  int i,j;
  for(i=0;i<N;i++){
    int s,l,p;
    cin>>s>>l>>p;
    get<0>(a.at(i))=s;
    get<1>(a.at(i))=l;
    get<2>(a.at(i))=p;
  }

  int k,m;
  bool chek=0;
  cin>>m;
  vector<int> ans(m);
  for(k=0;k<m;k++){
    cin>>W;
    vector<vector<long long>> dp(N+1,vector<long long>(W+1,0));
    for(i=0;i<N;i++){
      for(j=0;j<=W;j++){
        if(j-get<0>(a.at(i))<0){
          dp.at(i+1).at(j)=dp.at(i).at(j);
        }else{
          dp.at(i+1).at(j)=max(dp.at(i).at(j),dp.at(i+1).at(j-get<0>(a.at(i)))+get<2>(a.at(i)));
        }
      }
    }
    if(dp.at(N).at(W)==0){
      chek=1;
      break;
    }
    ans.at(k)=dp.at(N).at(W);
  }
  if(chek)
  cout<<-1<<endl;
  else{
    for(k=0;k<m;k++)
    cout<<ans.at(k)<<endl;
  }

}
