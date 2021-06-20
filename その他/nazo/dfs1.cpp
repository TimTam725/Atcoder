#include<bits/stdc++.h>
using namespace std;

int main(){

  int H,W;
  cin>>H>>W;

  vector<string> c(H);
  int i;
  for(i=0;i<H;i++){
    cin>>c.at(i);
  }

  stack<int> x;
  stack<int> y;
  // vector<vector<int>> a(H,vector<int>(W));
  vector<vector<bool>> judge(H,vector<bool>(W,1));
  int j,k,l,m,n;

  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      if(c.at(i).at(j)=='s'){
        x.push(i);
        y.push(j);
        k=i;
        l=j;
      }
      else if(c.at(i).at(j)=='g'){
        judge.at(i).at(j)=0;
        m=i;
        n=j;
      }
      else if(c.at(i).at(j)=='.'){
        judge.at(i).at(j)=0;
      }
    }
  }
  vector<int> dx={-1,0,1,0};
  vector<int> dy={0,1,0,-1};
  bool ans=false;

  while(!(x.empty())){

    bool check=false;
    for(i=0;i<4;i++){

      int xzahyo=x.top()+dx.at(i);
      int yzahyo=y.top()+dy.at(i);
      if(xzahyo<0||yzahyo<0||xzahyo>=H||yzahyo>=W){
        continue;
      }
      if((c.at(xzahyo).at(yzahyo)!='#')&&(judge.at(xzahyo).at(yzahyo)==0)){
        x.push(xzahyo);
        y.push(yzahyo);
        judge.at(xzahyo).at(yzahyo)=1;
        check=true;
        // cout<<xzahyo<<" "<<yzahyo<<endl;
      }
      if(check){
        break;
      }
    }

    if(!(check)){
      if((x.top()==m)&&(y.top()==n)){
        ans=true;
      }
      x.pop();
      y.pop();
      // cout<<x.top()<<" "<<y.top()<<endl;
    }

  }

  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

}
