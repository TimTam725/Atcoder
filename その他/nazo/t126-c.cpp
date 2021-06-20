#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,K;
  cin>>N>>K;

  double ans=0;
  int i;
  for(i=0;i<N;i++){
    double n=N;
    double kaku=1.0/n;
    // cout<<"kaku "<<kaku<<" k "<<k<<endl;
    int k=i+1;
    // bool jud=0;
      while(k<K){
        // jud=1;
        kaku*=0.5;
        k*=2;
        // cout<<kaku<<endl;
      }
      // if(jud)
      // ans+=kaku*(1.0*0.5);
      // else
      ans+=kaku;
      // cout<<"ans "<<ans<<endl;
    }

    cout<<setprecision(12)<<ans<<endl;
}
