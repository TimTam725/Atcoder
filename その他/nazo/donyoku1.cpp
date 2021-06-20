#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin>>N;

  int ans=0;
  int otsuri=1000-N;

  int i=1;
  int j=0;
  vector<int> a={500,100,50,10,5,1};
  while(otsuri!=0){
    // cout<<"syori"<<endl;
    // cout<<a.at(j)<<endl<<"i "<<i<<endl;
    if(a.at(j)*i<=otsuri){
      i++;
      if(otsuri==0)
      ans+=i;
    }
    else{
      i--;
      ans+=i;
      otsuri-=a.at(j)*i;
      // cout<<"stduri "<<otsuri<<endl;
      i=0;
      j++;
    }

    // cout<<ans<<endl;
  }

  cout<<ans<<endl;

}
