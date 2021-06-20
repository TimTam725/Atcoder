#include<bits/stdc++.h>
using namespace std;

int main(){
  int D,G;
  int i;

  cin>>D>>G;

  vector<int> p(D);
  vector<int> c(D);

  for(i=0;i<D;i++)
  cin>>p.at(i)>>c.at(i);

  int cnt,j;
  int min=0;
  for(i=0;i<D;i++)
  min+=p.at(i);

  int bit;
  for(bit=1;bit<(1<<D);bit++){
    int memo=bit;
    int sum=0;
    cnt=0;
    j=1;
    cout<<"bit dayo "<<bit<<endl;
    while(memo!=0){

      bool hand=false;

      for(i=0;i<D;i++){
        if(memo&(1<<(D-1-i))){
          sum+=100*(i+1);
          cnt++;
          if(p.at(i)==j){
            sum+=c.at(i);
            if(sum>=G){
              if(min>cnt)
              min=cnt;
              hand=true;
              cout<<"cnt "<<cnt<<endl;
            }
            memo&=~(1<<D-1-i);
            // cout<<"bit "<<bitset<2>(memo)<<endl;
          }
          else if(sum>=G){
            if(min>cnt)
            min=cnt;
            hand=true;
            cout<<"cnt "<<cnt<<endl;
          }
          cout<<"sum"<<sum<<endl;
        }
      }
      j++;
      cout<<j<<endl;
      if(hand==true)
      break;
    }

  }

  cout<<min<<endl;

}
