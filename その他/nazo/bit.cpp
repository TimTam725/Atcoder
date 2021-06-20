#include<bits/stdc++.h>
using namespace std;
int rui2(int e){
  int ans=1;
  for(int i=1;i<=e;i++)
  ans*=2;
  return ans;
}

int main(){
  int a,b;
  cin>>a>>b;

  int k=0;
  while(rui2(k)<b){
    k++;
  }

int bit=b;
int f0=a;
int ans=0;
for(int i=0;i<=k;i++){
  if(bit&(1<<i)){
    ans+=f0;
  }
  f0*=2;
}
cout<<ans<<endl;

}
