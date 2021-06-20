#include<bits/stdc++.h>
using namespace std;
#include<queue>
#include<set>

long long bfs(int H,int W,int sx,int sy,int gx,int gy,vector<string> &a);

int main(){
  int R,C,N;
  cin>>R>>C>>N;

  vector<string> c(R);
  int i;
  for(i=0;i<R;i++)
  cin>>c.at(i);

  vector<int> x(N+1);
  vector<int> y(N+1);
  for(i=0;i<=N;i++){
    char b;
    if(i==0)
    b='S';
    else
    b=i+'0';
    for(int k=0;k<R;k++){
      for(int l=0;l<C;l++){
        if(c.at(k).at(l)==b){
          x.at(i)=l;
          y.at(i)=k;
        }
      }
    }
  }
  // for(i=0;i<x.size();i++){
  //   cout<<i<<" x "<<x.at(i)<<" y "<<y.at(i)<<endl;
  // }

  int cnt;
  int mawasu=1;
  long long ans=0;
  int hp=1;
  int start;
  int goal=0;
  set<int> totta;

  while(mawasu<=N){
    // cout<<"mawasu "<<mawasu<<endl;
    start=goal;
    long long minans=100000000000;
    if(hp>9)
    hp=9;
    for(int j=1;j<=hp;j++){
      if(totta.count(j))
      continue;
      long long cnt2;
      // cout<<"start x "<<x.at(start)<<" y "<<y.at(start)<<endl;
      // cout<<"goal x "<<x.at(j)<<" y "<<y.at(j)<<endl;
      cnt2=bfs(R,C,x.at(start)+1,y.at(start)+1,x.at(j)+1,y.at(j)+1,c);
      // cout<<"j "<<j<<" cnt2 "<<cnt2<<endl;
      if(minans>cnt2){
        cnt=cnt2;
        minans=cnt2;
        goal=j;
      }
    }
    ans+=cnt;
    totta.insert(goal);
    hp+=goal;
    // cout<<"goal "<<goal<<endl<<"hp "<<hp<<endl;;
    mawasu++;
    // cout<<"ans "<<ans<<endl;
  }

cout<<ans<<endl;

}

long long bfs(int H,int W,int sx,int sy,int gx,int gy,vector<string> &a){
  queue<int> qy;
  queue<int> qx;
  qy.push(sy-1);
  qx.push(sx-1);
  vector<vector<bool>> reached(H,vector<bool>(W,0));
  reached.at(sy-1).at(sx-1)=1;
  vector<vector<long long>> num(H,vector<long long>(W,10000000));
  num.at(sy-1).at(sx-1)=0;

  vector<int> dy={-1,0,1,0};
  vector<int> dx={0,1,0,-1};

  while(!(qy.empty())){
    int y=qy.front();
    int x=qx.front();

    for(int i=0;i<4;i++){
      int yy=y+dy.at(i);
      int xx=x+dx.at(i);
      if(xx<0||yy<0||xx>=W||yy>=H)
      continue;
      if((a.at(yy).at(xx)!='X')&&!(reached.at(yy).at(xx))){
        num.at(yy).at(xx)=min(num.at(yy).at(xx),num.at(y).at(x)+1);
        reached.at(yy).at(xx)=1;
        qy.push(yy);
        qx.push(xx);
      }
    }
    qy.pop();
    qx.pop();
  }

  long long ans=num.at(gy-1).at(gx-1);
  return ans;

}
