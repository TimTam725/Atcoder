#include<bits/stdc++.h>
using namespace std;

int search(vector<vector<int>> &child,int x){
  int i,k,count;

  if(child.at(x).size()==0)
  return 1;

  count=0;
  for(i=0;i<child.at(x).size();i++){
    k=child.at(x).at(i);
    count+=search(child,k);
  }
  count++;
  return count;
}

int main(){
  int n,i,parent,count,x;

  cin>>n;

  vector<int> p(n);
  p.at(0)=-1;
  for(i=1;i<n;i++)
  cin>>p.at(i);

  vector<vector<int>> child(n);

  for(i=1;i<n;i++){
    parent=p.at(i);
    child.at(parent).push_back(i);
  }
  // for(x=0;x<n-1;x++){
  //   for(i=0;i<child.at(x).size();i++)
  //   cout<<child.at(x).at(i);
  // }

  for(i=0;i<n;i++)
  cout<<search(child,i)<<endl;





  // for(k=1;k<n;k++){
  //   for(i=0;i<child.at(k).size();i++){
  //     if(i==child.at(k).size()-1)
  //     cout<<child.at(k).at(i)<<endl;
  //     else
  //     cout<<child.at(k).at(i)<<" ";
  //   }
  // }
  // for(i=1;i<=k;i++){
  //   parent=p.at(i);
  //   if(i==child.at(parent).size())
  //   cout<<child.at(parent).at(i)<<endl;
  //   else
  //   cout<<child.at(parent).at(i)<<" ";
  //   k=child.at(k++).size();
  // }

}
