#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,char> pl;

int main(){
  string s,t;
  cin>>s>>t;

  int i;
  int c=0;
  priority_queue<pl, vector<pl>, greater<pl> > que;
  set<char> ss;
  for(i=0;i<s.size();i++){
    c++;
    que.push(make_pair(c,s[i]));
    ss.insert(s[i]);
  }
  // while(!(que.empty())){
  //   cout<<que.top().first<<" "<<que.top().second<<endl;
  //   que.pop();
  // }

  bool jud=1;
  for(i=0;i<t.size();i++){
    if(!(ss.count(t[i]))){
      jud=0;
      break;
    }
  }
  if(jud){
    priority_queue<pl, vector<pl>, greater<pl> > q;
    for(i=0;i<t.size();i++){
      q=que;
      while(!(que.empty())){
        
      }
    }
  }else{
    cout<<-1<<endl;
  }

}
