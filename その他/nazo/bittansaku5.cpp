#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,M;
  cin>>N>>M;

  int i;
  vector<vector<bool>> c(N,vector<bool>(N,false));
  for(i=0;i<M;i++){
    int x,y;
    cin>>x>>y;
    c.at(x-1).at(y-1)=true;
    c.at(x-1).at(x-1)=true;
    c.at(y-1).at(y-1)=true;
  }

  int ans=0;
  int bit;
  for(bit=1;bit<(1<<N);bit++){
    int t=bitset<16>(bit).count();
    if(t<=ans){
      continue;
    }

    bool judge=true;
    for(i=0;i<N;i++){
        if(!(bit&(1<<i))){
          continue;
        }
        else{
          for(int j=i;j<N;j++){
            if(bit&(1<<j)){
              if(c.at(i).at(j)==false){
                judge=false;
              }
            }
          }
        }
    }
    if(judge){
      ans=t;
    }


  }
  /*for(i=0;i<N;i++){
    for(int j=0;j<N-1;j++){
      cout<<c.at(i).at(j)<<" ";
    }
    cout<<c.at(i).at(N-1)<<endl;
  }*/
  if(ans==0)
  ans++;
  
  cout<<ans<<endl;

}
