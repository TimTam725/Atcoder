#include<bits/stdc++.h>
using namespace std;
#include<queue>

//s:頂点-1
void dijkstra(int s,vector<vector<long long>> &a,vector<long long> &d){
  long long inf=1000000000000000;
  int n=a.size();
  int i;
  long long minu;
  vector<bool> memo(n,0);
  queue<int> nod;
  // int k=0;
  for(i=0;i<n;i++){
    if(i==s)
    d.at(i)=0;
    else
    d.at(i)=inf;
  }
  int root;
  while(1){
    minu=inf;
    bool jud=0;
    for(i=0;i<n;i++){
      if((minu>d.at(i))&&!(memo.at(i))){
        jud=1;
        root=i;
        minu=d.at(i);
      }
    }
    if(jud){
      memo.at(root)=1;
      for(i=0;i<n;i++){
        if(memo.at(i))
        continue;
        else if(d.at(root)+a.at(root).at(i)<d.at(i)){
          d.at(i)=d.at(root)+a.at(root).at(i);
        }
      }
    }
    else
    break;
    // k++;
    // if(k==100)
    // break;
  }

}

int main(){
  int N;
  cin>>N;

  vector<vector<long long>> a(N,vector<long long>(N,1000000000000000));
  vector<long long> d(N);

  for(int i=0;i<N-1;i++){
    int k,l,w;
    cin>>k>>l>>w;
    a.at(k-1).at(l-1)=w;
    a.at(l-1).at(k-1)=w;
  }

  dijkstra(0,a,d);

  cout<<0<<endl;
  for(int i=1;i<N;i++){
    // if(d.at(i)%2==0)
    cout<<d.at(i)<<endl;
    // else
    // cout<<1<<endl;
  }
}
