#include<bits/stdc++.h>
using namespace std;

int yuguri(int,int);

int main(){

  int N;

  cin>>N;

  long long ans=1;
  for(int i=1;i<=N;i++){
    // cout<<yuguri(ans,1000000007)<<endl;
    ans=i*ans%1000000007;
  }

  cout<<ans<<endl;

}


int yuguri(int a,int b){

  int r;
  if(a<b)
  swap(a,b);

  while((r=a%b)){
    a=b;
    b=r;
  }
  return b;
}
