#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin>>N>>M;

  priority_queue<pair<int,int>> q;
  vector<pair<int,int>> pr(N);
  int i;
  for(i=0;i<N;i++){
    int a,b;
    cin>>a>>b;
    pr.at(i)=make_pair(a,b);
  }

  sort(pr.begin(),pr.end());

  int st=0;
  int j;
  long long ans=0;
  for(i=1;i<=M;i++){
    // bool chek=0;
    for(j=st;j<N;j++){
      if(pr.at(j).first==i){
        // chek=1;
        q.push(make_pair(pr.at(j).second,pr.at(j).first));
      }else{
        break;
      }
    }
    if(!q.empty()){
      ans+=q.top().first;
      q.pop();
    }
    st=j;
  }
  // for(i=0;i<N;i++){
  //   cout<<"f "<<pr.at(i).first<<" s "<<pr.at(i).second<<endl;
  // }
  // while(!q.empty()){
  //   cout<<"f "<<q.top().first<<" s "<<q.top().second<<endl;
  //   q.pop();
  // }


  cout<<ans<<endl;

}
