#include<bits/stdc++.h>
using namespace std;
#include<stack>
void rootdistance(vector<vector<long long>> &nod,vector<bool> &a){
  stack<int> x;
  x.push(0);
  int n=nod.size();
  vector<bool> memo(n,0);
  long long distance=0;
  while(!(x.empty())){

    bool jud=0;
    int r=x.top();
    // cout<<"top r "<<r<<endl;
    for(int i=0;i<n;i++){
      if(nod.at(r).at(i)==0||memo.at(i)==1)
      continue;
      distance+=nod.at(r).at(i);
      x.push(i);
      memo.at(i)=1;
      jud=1;
      break;
    }
    if(!(jud)){
      if(distance%2==0)
      a.at(r)=0;
      else
      a.at(r)=1;
      x.pop();
      if(x.empty())
      break;
      int prer=x.top();
      distance-=nod.at(r).at(prer);
    }

  }

}

int main(){
  int N;
  cin>>N;

  vector<vector<long long>> nod(N,vector<long long>(N,0));
  vector<bool> a(N,0);
  int i;
  for(i=0;i<N-1;i++){
    int j,k,w;
    cin>>j>>k>>w;
    nod.at(j-1).at(k-1)=w;
    nod.at(k-1).at(j-1)=w;
  }

  rootdistance(nod,a);
  cout<<0<<endl;
  for(i=1;i<N;i++){
    if(a.at(i))
    cout<<1<<endl;
    else
    cout<<0<<endl;
  }


}
