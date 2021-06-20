#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  string s;
  cin>>s;

  bool ans=1;
  for(int i=0;i<s.size();i++){
    if(i%2==0&&(s[i]=='L')){
      ans=0;
      break;
    }else if(i%2==1&&(s[i]=='R')){
      ans=0;
      break;
    }
  }

  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

}
