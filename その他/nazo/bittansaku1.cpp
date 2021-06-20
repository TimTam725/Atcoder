#include<bits/stdc++.h>
using namespace std;
#include<set>

int main(){
  string s;
  set<int> st;
  cin>>s;

  long long sum=0;
  int n=s.size();
  for(int bit=0;bit<(1<<n-1);bit++){

    int sum2=0;
    int suu=s.at(0)-'0';

    int i;
    // cout<<"bit "<<bit<<endl;
    for(i=0;i<n-1;i++){
      if(bit&(1<<n-2-i)){
        if(i!=0)
        suu=(suu*10+(s.at(i)-'0'));
        sum2+=suu;
        suu=0;
      }
      else{
        if(i!=0)
        suu=(suu*10+(s.at(i)-'0'));
        // cout<<suu<<endl;
      }
    }

    if(suu==0)
    sum2+=(s.at(n-1)-'0');
    else{
      suu=(suu*10+(s.at(n-1)-'0'));
      sum2+=suu;
    }
    int d=st.count(sum2);
    if(d==0){
      // cout<<"insert"<<endl;
      st.insert(sum2);
      sum+=sum2;
    }
    // cout<<"sum2 "<<sum2<<endl;
    // cout<<"sum "<<sum<<endl;

  }

  cout<<sum<<endl;

}
