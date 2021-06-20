#include<bits/stdc++.h>
using namespace std;
#include<queue>
#include<set>

bool dfs(int H,int W,vector<string> &s);
int bfs(int H,int W,int sx,int sy,int gx,int gy,vector<string> &a);

int main(){

  int H,W;
  cin>>H>>W;

  vector<string> s(H);
  for(int i=0;i<H;i++)
  cin>>s.at(i);

  bool ikeru=dfs(H,W,s);

  if(ikeru){
    int saitan=bfs(H,W,1,1,W,H,s);
    int souwa=H*W;
    int syouheki=0;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        // if((i==0&&j==0)||(i==H-1)&&(j==W-1))
        // continue;
        if(s.at(i).at(j)=='.')
        syouheki++;
      }
    }
    int ans=syouheki-(saitan+1);
    cout<<ans<<endl;
  }
  else
  cout<<-1<<endl;

}

bool dfs(int H,int W,vector<string> &s){
  vector<vector<bool>> judge(H,vector<bool>(W,0));
  stack<int> x;
  x.push(0);
  stack<int> y;
  y.push(0);
  vector<int> dx={-1,0,1,0};
  vector<int> dy={0,1,0,-1};
  bool ans=false;

  while(!(x.empty())){

    bool check=false;
    for(int i=0;i<4;i++){
      int nx=x.top()+dx.at(i);
      int ny=y.top()+dy.at(i);
      if(nx<0||ny<0||nx>=H||ny>=W){
        continue;
      }
      if((s.at(nx).at(ny)!='#')&&!(judge.at(nx).at(ny))){
        x.push(nx);
        y.push(ny);
        judge.at(nx).at(ny)=1;
        check=true;
      }
    }

    if(!(check)){
      if((x.top()==H-1)&&(y.top()==W-1)){
        ans=true;
      }
      x.pop();
      y.pop();
    }
  }

  return ans;

}

int bfs(int H,int W,int sx,int sy,int gx,int gy,vector<string> &a){
  queue<int> qy;
  queue<int> qx;
  qy.push(sy-1);
  qx.push(sx-1);
  vector<vector<bool>> reached(H,vector<bool>(W,0));
  reached.at(sy-1).at(sx-1)=1;
  vector<vector<int>> num(H,vector<int>(W,10000000));
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
      if((a.at(yy).at(xx)!='#')&&!(reached.at(yy).at(xx))){
        num.at(yy).at(xx)=min(num.at(yy).at(xx),num.at(y).at(x)+1);
        reached.at(yy).at(xx)=1;
        qy.push(yy);
        qx.push(xx);
      }
    }
    qy.pop();
    qx.pop();
  }

  int ans=num.at(gy-1).at(gx-1);
  return ans;

}
