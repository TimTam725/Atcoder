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
  // for(i=0;i<D;i++)
  // cout<<p.at(i)<<" "<<c.at(i)<<endl;

  int sum,cnt;
  int min=0;
  bool hand=false;
  for(i=0;i<D;i++)
  min+=p.at(i);

  for(int bit=0;bit<(1<<D);bit++){
    hand=false;
    sum=0;
    cnt=0;
    for(i=0;i<D;i++){
      if(bit&(1<<D-1-i)){
        // if(bit==16){
        //   cout<<i<<endl;
        // }
        sum+=(100*(D-i)*p.at(D-1-i)+c.at(D-1-i));
        cnt+=p.at(D-1-i);
      }
    }
    // if(bit==16)
    // cout<<"kita "<<sum<<" "<<cnt<<endl;
    if(sum>=G){
      // cout<<bitset<8>(bit)<<endl<<"only bo-nasu"<<sum<<" "<<cnt<<endl;
      if(min>cnt)
      min=cnt;
    }
    else{
      for(i=0;i<D;i++){
        // if(bit==16)
        // cout<<"simasu "<<bitset<8>(bit)<<endl;
        if(!(bit&(1<<D-1-i))){
          // if(bit==16)
          // cout<<"ahha----n"<<endl;
          for(int j=1;j<p.at(D-1-i);j++){
            sum+=100*(D-i);
            cnt++;
            // if(bit==16)
            // cout<<"kita "<<sum<<" "<<cnt<<endl;
            if(sum>=G){
              // cout<<bitset<8>(bit)<<endl<<sum<<" "<<cnt<<endl;
              if(min>cnt)
              min=cnt;
              hand=true;
              break;
            }
          }
        }
        // if(bit==16)
        // cout<<"tsugi"<<endl;
        if(hand==true)
         break;
      }
    }
  }

  cout<<min<<endl;


}
