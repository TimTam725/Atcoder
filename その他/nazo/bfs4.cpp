#include<bits/stdc++.h>
using namespace std;
#include<set>
#include<queue>

int main(){
  int H,W;
  cin>>H>>W;

  vector<string> a(H);
  vector<int> c={0};
  vector<vector<bool>> memo(H,vector<bool>(W,0));
  queue<int> qx;
  queue<int> qy;
  int i,j;
  for(i=0;i<H;i++){
    cin>>a.at(i);
    for(j=0;j<W;j++){
      if(a.at(i).at(j)=='#'){
        qx.push(i);
        qy.push(j);
        c.at(0)++;
        memo.at(i).at(j)=1;
      }
    }
  }

  int cnt=0;
  int k=0;
  int cnt2=0;
  int cnt3=0;
  while(!(qx.empty())){
    int x=qx.front();
    int y=qy.front();

    vector<int> dx={-1,0,1,0};
    vector<int> dy={0,1,0,-1};

    bool judge=0;
    for(i=0;i<4;i++){
      int nx=x+dx.at(i);
      int ny=y+dy.at(i);

      if(nx<0||ny<0||nx>=H||ny>=W)
      continue;
      if((a.at(nx).at(ny)=='.')&&!(memo.at(nx).at(ny))){
        qx.push(nx);
        qy.push(ny);
        cnt2++;//pushの数
        a.at(nx).at(ny)='#';
        memo.at(nx).at(ny)=1;
        judge=1;
      }

    }


    // for(i=0;i<H;i++)
    // cout<<a.at(i)<<endl;
    // cout<<cnt<<endl;

    qx.pop();
    qy.pop();
    cnt3++;//popの数
    if(cnt3==c.at(k)){
      c.push_back(cnt2);
      k++;
      cnt++;
      cnt2=0;
      cnt3=0;
    }

  }
  cnt--;
  cout<<cnt<<endl;


}
