#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,n,m,i,j,k;

  cin>>n>>m;

  vector<vector<char>> chap(n,vector<char>(n,'-'));

  for(k=0;k<m;k++){
    cin>>a>>b;
    chap.at(a-1).at(b-1)='o';
    chap.at(b-1).at(a-1)='x';
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==n-1){
        cout<<chap.at(i).at(j)<<endl;
      }
      else
      cout<<chap.at(i).at(j)<<" ";
    }
  }
}
