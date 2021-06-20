#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<string> c(10);

  int i;
  for(i=0;i<10;i++){
    cin>>c.at(i);
  }

  int j,cnt;
  cnt=0;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(c.at(i).at(j)=='o')
      cnt++;
    }
  }

// cout<<cnt<<endl;
  int ans=false;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(c.at(i).at(j)=='o')
      continue;
      else{
        // cout<<i<<" "<<j<<endl;
        stack<int> x;
        stack<int> y;
        vector<vector<bool>> reached(10,vector<bool>(10,false));
        vector<int> dx={-1,0,1,0};
        vector<int> dy={0,1,0,-1};
        int cnt2=0;
        x.push(i);
        y.push(j);
        while(!(x.empty())){
          int ax;
          int ay;
          bool jud=false;
          for(int k=0;k<4;k++){
            ax=x.top()+dx.at(k);
            ay=y.top()+dy.at(k);
            if(ax<0||ay<0||ax>=10||ay>=10){
              continue;
            }
            if((c.at(ax).at(ay)=='o')&&(reached.at(ax).at(ay)==false)){
              x.push(ax);
              y.push(ay);
              reached.at(ax).at(ay)=true;
              jud=true;
              break;
            }
          }
          if(!(jud)){
            x.pop();
            y.pop();
            cnt2++;
          }
        }
        // cout<<cnt2<<endl;
        if((cnt+1)==cnt2){
          ans=true;
        }
      }
    }
  }

  if(ans)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

}
