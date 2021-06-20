#include<iostream>
#include<fstream>

#define F "tx.txt"

using namespace std;

int main()
{
    char inputTxt;
    ofstream outputfile(F);

    cout<<"何か文字を記入してください。:";
    cin>>inputTxt;
    cout<<"あなたが記入した文字を"<<F<<"に書き出しました。"<<endl;


    outputfile<<inputTxt;
    outputfile.close();
}
