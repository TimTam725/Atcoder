#include<bits/stdc++.h>
using namespace std;
#include<fstream>

#define F "tx.cnf"

int main(){

  int cnt=0;
  int k,l,j;
  vector<vector<string>> kaki(9,vector<string>(9,""));
  vector<string> index={"1","2","3","4","5","6","7","8","9"};
  vector<string> moji1={"1","2","3","4","5","6","7","8","9"};
  vector<string> moji2={"1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 "};

  //ルール1　各マスは1から9のいずれかの数である
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){
      for(j=0;j<9;j++){
        kaki.at(k).at(l)+=index.at(k)+moji1.at(l)+moji2.at(j);
      }
      kaki.at(k).at(l)+='0';
      cnt++;
    }
  }

  //ルール2　各行には1から9までが1つずつ現れる
  vector<vector<vector<string>>> kaki2(9,vector<vector<string>>(9,vector<string>(36,"")));
  //ルール3　各列には1から9までが1つずつ現れる
  vector<vector<vector<string>>> kaki3(9,vector<vector<string>>(9,vector<string>(36,"")));
  string ne="-";
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){//(l+1)は1回しか現れない
      int san=0;
      for(j=0;j<8;j++){
        for(int w=j+1;w<9;w++){
          kaki2.at(k).at(l).at(san)=(ne+index.at(k)+moji1.at(j)+moji2.at(l))+(ne+index.at(k)+moji1.at(w)+moji2.at(l))+"0";
          kaki3.at(k).at(l).at(san)=(ne+index.at(j)+moji1.at(k)+moji2.at(l))+(ne+index.at(w)+moji1.at(k)+moji2.at(l))+"0";
          san++;
          cnt+=2;
        }
      }
    }
  }

  //ルール4　各ブロックには1から9までが1つずつ現れる
  vector<vector<vector<vector<string>>>> kaki4(3,vector<vector<vector<string>>>(3,vector<vector<string>>(9,vector<string>(36,""))));
  vector<int> dx={0,1,2,0,1,2,0,1,2};
  vector<int> dy={0,0,0,1,1,1,2,2,2};
  for(k=0;k<3;k++){
    for(l=0;l<3;l++){
      for(int z=0;z<9;z++){
        int san=0;
        for(j=0;j<8;j++){
          for(int w=j+1;w<9;w++){
            kaki4.at(k).at(l).at(z).at(san)=(ne+index.at(k*3+dy.at(j))+moji1.at(l*3+dx.at(j))+moji2.at(z))+(ne+index.at(k*3+dy.at(w))+moji1.at(l*3+dx.at(w))+moji2.at(z))+"0";
            san++;
            cnt++;
          }
        }
      }
    }
  }


  //盤面の入力
  vector<string> c(9);
  for(k=0;k<9;k++){
    cin>>c.at(k);
  }

  vector<char> mo={'1','2','3','4','5','6','7','8','9'};
  vector<string> d(0);
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){
      if(c.at(k).at(l)!='.'){
        for(j=0;j<9;j++){
          if(c.at(k).at(l)==mo.at(j)){
            d.push_back(index.at(k)+moji1.at(l)+moji2.at(j)+"0");
            cnt++;
          }
        }
      }
    }
  }

  //cnfファイルを作る
  ofstream outputfile(F);
  //命題変数の数と節の数
  outputfile<<"p cnf 729 "<<cnt<<endl;
  //kakiの出力
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){
      outputfile<<kaki.at(k).at(l)<<endl;
    }
  }
  //kaki2の出力
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){
      for(j=0;j<36;j++)
      outputfile<<kaki2.at(k).at(l).at(j)<<endl;
    }
  }
  //kaki3の出力
  for(k=0;k<9;k++){
    for(l=0;l<9;l++){
      for(j=0;j<36;j++)
      outputfile<<kaki3.at(k).at(l).at(j)<<endl;
    }
  }
  //kaki4の出力
  for(k=0;k<3;k++){
    for(l=0;l<3;l++){
      for(j=0;j<9;j++){
        for(int w=0;w<36;w++)
        outputfile<<kaki4.at(k).at(l).at(j).at(w)<<endl;
      }
    }
  }
  //dの出力
  for(k=0;k<d.size();k++){
    outputfile<<d.at(k)<<endl;
  }

  outputfile.close();
}
