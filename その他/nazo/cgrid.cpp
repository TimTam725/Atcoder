#include<bits/stdc++.h>
using namespace std;

int main(){
  int H,W;
  cin>>H>>W;

  vector<string> s(H);
  int i;
  for(i=0;i<H;i++)
  cin>>s.at(i);

  vector<int> dx={-1,0,1,0};
  vector<int> dy={0,1,0,-1};

  bool ans=true;
  int count=0;
  for(i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(s.at(i).at(j)=='.'){
        count++;
        continue;
      }
      else{
        ans=false;
        for(int k=0;k<4;k++){
          int nx=i+dx.at(k);
          int ny=j+dy.at(k);

          if(nx<0||nx>H-1||ny<0||ny>W-1)
          continue;
          if(s.at(nx).at(ny)=='#')
          ans=true;
        }
      }
      if(ans==false)
      break;
    }
    if(ans==false)
    break;
  }


  if(ans==true||count==H*W)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
