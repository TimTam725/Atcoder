#include<bits/stdc++.h>
using namespace std;

int main(){
  int H,W;

  cin>>H>>W;

  vector<string> S(H);

  int i,j;

  for(i=0;i<H;i++)
  cin>>S.at(i);

  vector<int> dx={0,1,1,1,0,-1,-1,-1};
  vector<int> dy={1,1,0,-1,-1,-1,0,1};

  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      if(S.at(i).at(j)=='#')
      continue;

      int count=0;
      for(int k=0;k<8;k++){
        int nx=j+dx.at(k);
        int ny=i+dy.at(k);

        if(nx<0||ny<0||(nx>W-1)||(ny>H-1))
        continue;
        if(S.at(ny).at(nx)=='#')
        count++;
      }
      S.at(i).at(j)='0'+count;
    }
  }
  for(i=0;i<H;i++)
  cout<<S.at(i)<<endl;

}
