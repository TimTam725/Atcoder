#include<bits/stdc++.h>
using namespace std;
#include<queue>

int main(){

  int R,C;
  cin>>R>>C;

  int sy,sx,gy,gx;
  cin>>sy>>sx;
  cin>>gy>>gx;

  vector<string> c(R);
  int i;
  for(i=0;i<R;i++)
  cin>>c.at(i);

  vector<vector<int>> num(R,vector<int>(C,10000000));
  vector<vector<bool>> reached(R,vector<bool>(C,0));
  reached.at(sy-1).at(sx-1)=1;
  num.at(sy-1).at(sx-1)=0;
  queue<int> qx;
  queue<int> qy;
  qx.push(sx-1);
  qy.push(sy-1);

  vector<int> dx={0,1,0,-1};
  vector<int> dy={-1,0,1,0};
  int f=0;
  while(!(qx.empty())){
    // f++;
    // if(f==100)
    // break;
    int x=qx.front();
    int y=qy.front();
    // cout<<"y "<<y<<endl;
    // cout<<"x "<<x<<endl;
    for(i=0;i<4;i++){
      int xx=x+dx.at(i);
      int yy=y+dy.at(i);
      if(xx<0||yy<0||xx>=C||yy>=R)
      continue;
      if((c.at(yy).at(xx)!='X')&&!(reached.at(yy).at(xx))){
        qx.push(xx);
        qy.push(yy);
        num.at(yy).at(xx)=min(num.at(yy).at(xx),num.at(y).at(x)+1);
        reached.at(yy).at(xx)=1;
        // cout<<"num.at("<<yy<<").at("<<xx<<") "<<num.at(yy).at(xx)<<endl;
      }
    }
    qx.pop();
    qy.pop();
  }
  // for(i=0;i<R;i++){
  //   for(int j=0;j<C-1;j++)
  //   cout<<num.at(i).at(j)<<" ";
  //   cout<<num.at(i).at(C-1)<<endl;
  // }

  cout<<num.at(gy-1).at(gx-1)<<endl;

}
