#include<bits/stdc++.h>
using namespace std;

int main(){
  int H,W,i,j,k,l,count;

  cin>>H>>W;

  vector<string> s(H);
  vector<char> c={'0','1','2','3','4','5','6','7','8'};


  for(i=0;i<H;i++)
  cin>>s.at(i);

  if(H==1){
    if(W==1){
      cout<<s.at(0)<<endl;
    }
    for(j=0;j<W;j++){
      count=0;
      if(s.at(0).at(j)=='.'){
        if(j==0){
          if(s.at(0).at(j+1)=='#')
          s.at(0).at(j)='1';
        }
        else if(j==W-1){
          if(s.at(0).at(j-1)=='#')
          s.at(0).at(j)='1';
        }
        else{
          if(s.at(0).at(j-1)=='#')
          count++;
          if(s.at(0).at(j+1)=='#')
          count++;
          s.at(0).at(j)=c.at(count);
        }
      }
    }
  }
  else if(W==1){
    for(i=0;i<H;i++){
      count=0;
      if(s.at(i).at(0)=='.'){
        if(i==0){
          if(s.at(i+1).at(0)=='#')
          s.at(i).at(0)='1';
        }
        else if(i==H-1){
          if(s.at(i-1).at(0)=='#')
          s.at(i).at(0)='1';
        }
        else{
          if(s.at(i-1).at(0)=='#')
          count++;
          if(s.at(i+1).at(0)=='#')
          count++;
          s.at(i).at(0)=c.at(count);
        }
      }
    }
  }
  else{
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
        count=0;
        if(s.at(i).at(j)=='.'){
          if((i>0&&i<(H-1))&&(j>0&&j<(W-1))){
            count=0;
            for(k=0;k<3;k++){
              if(s.at(i-1).at(j-1+k)=='#')
              count++;
              if(s.at(i+1).at(j-1+k)=='#')
              count++;
            }
            if(s.at(i).at(j+1)=='#')
            count++;
            if(s.at(i).at(j-1)=='#')
            count++;
            s.at(i).at(j)=c.at(count);
          }
          else if(i==0){
            if(j==0){
              if(s.at(i).at(j+1)=='#')
              count++;
              if(s.at(i+1).at(j+1)=='#')
              count++;
              if(s.at(i+1).at(j)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
            else if(j==W-1){
              if(s.at(i).at(j-1)=='#')
              count++;
              if(s.at(i+1).at(j-1)=='#')
              count++;
              if(s.at(i+1).at(j)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
            else{
              for(k=0;k<3;k++){
                if(s.at(i+1).at(j-1+k)=='#')
                count++;
              }
              if(s.at(i).at(j-1)=='#')
              count++;
              if(s.at(i).at(j+1)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
          }
          else if(i==H-1){
            if(j==0){
              if(s.at(i-1).at(j)=='#')
              count++;
              if(s.at(i-1).at(j+1)=='#')
              count++;
              if(s.at(i).at(j+1)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
            else if(j==W-1){
              if(s.at(i-1).at(j)=='#')
              count++;
              if(s.at(i-1).at(j-1)=='#')
              count++;
              if(s.at(i).at(j-1)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
            else{
              for(k=0;k<3;k++){
                if(s.at(i-1).at(j-1+k)=='#')
                count++;
              }
              if(s.at(i).at(j-1)=='#')
              count++;
              if(s.at(i).at(j+1)=='#')
              count++;
              s.at(i).at(j)=c.at(count);
            }
          }
          else if(j==0){
            for(k=0;k<3;k++){
              if(s.at(i-1+k).at(j+1)=='#')
              count++;
            }
            if(s.at(i-1).at(j)=='#')
            count++;
            if(s.at(i+1).at(j)=='#')
            count++;
            s.at(i).at(j)=c.at(count);
          }
          else if(j==W-1){
            for(k=0;k<3;k++){
              if(s.at(i-1+k).at(j-1)=='#')
              count++;
            }
            if(s.at(i-1).at(j)=='#')
            count++;
            if(s.at(i+1).at(j)=='#')
            count++;
            s.at(i).at(j)=c.at(count);
          }
        }
      }
    }
  }

   for(i=0;i<H;i++){
     for(j=0;j<W;j++){
       if(s.at(i).at(j)=='.')
       s.at(i).at(j)='0';
     }
  }
  if((H==1&&W==1)==0){
  for(i=0;i<H;i++)
  cout<<s.at(i)<<endl;
}

}
