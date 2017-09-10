#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<iostream>

using namespace std;

#define ANSWER_NUM 4
#define RESULT_NUM 16

int answer[ANSWER_NUM];	//各設問の回答値
int answerSum;			//回答の合算値
bool sessionFlag = true;//プログラムの継続を決めるフラグ変数


char buff[2048];
char name[512];

char fileNameHead[RESULT_NUM] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

int main(){

	while (sessionFlag){

		ofstream fpw("output.html");

		cout << "名前を入力してください" << endl;
		cin >> name
;
		cout << "Q1:質問１" << endl;
		cout << "yes=1 no=0" << endl;
		cin >> answer[0];

		cout << "Q2:" << endl;
		cout << "yes=2 no=0"<< endl;
		cin >> answer[1];

		cout << "Q3:" << endl;
		cout << "yes=4 no=0" << endl;
		cin >> answer[2];

		cout << "Q4:" << endl;
		cout << "yes=8 no=0" << endl;
		cin >> answer[3];

		ifstream fp1("read.txt");
		while(fp1 >> buff){
			fpw << buff << endl;
		}

		fpw << "<h2>" << name << "さんのタイプは</h2>" << endl;
		answerSum = answer[0] + answer[1] + answer[2] + answer[3];
		cout << answerSum << endl;

		/*ファイル出力部*/
		if (answerSum >= 0 && answerSum < RESULT_NUM){
			std::string fileName(1,fileNameHead[answerSum]);	//fileName変数にa,b,c,...のアルファベットを代入
			fileName += ".txt";									//fileName変数に".txt"を付ける。
			ifstream fp1(fileName);								//a.txt,b.txt....の結果格納ファイルのオープン
			while(fp1 >> buff){
				fpw << buff << endl;
			}
			system("test.bat");
		}
		else{
			cout << "error" << endl;
			return EXIT_FAILURE;
		}

		/*継続可否決定部*/
		int inputStorage;										//継続の可否判断入力を格納する変数
		cout << "coutinue?yes=1,no=0" << endl;
		cin >> inputStorage;
		
		if (inputStorage == 1){
			sessionFlag = true;
		}else{
			sessionFlag = false;
		}
	}
	return 0;
}
