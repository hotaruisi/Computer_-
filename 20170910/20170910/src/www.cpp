#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<iostream>

using namespace std;

#define ANSWER_NUM 4

int answer[ANSWER_NUM];	//各設問の回答値
int answerSum;			//回答の合算値
bool sessionFlag = true;//プログラムの継続を決めるフラグ変数


char buff[2048];
char name[512];


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
		if(answerSum == 0){
			ifstream fp1("a.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 1){
			ifstream fp1("b.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 2){
			ifstream fp1("c.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 3){
			ifstream fp1("d.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 4){
			ifstream fp1("e.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 5){
			ifstream fp1("f.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 6){
			ifstream fp1("g.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 7){
			ifstream fp1("h.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 8){
			ifstream fp1("i.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 9){
			ifstream fp1("j.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 10){
			ifstream fp1("k.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 11){
			ifstream fp1("l.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 12){
			ifstream fp1("m.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 13){
			ifstream fp1("n.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 14){
			ifstream fp1("o.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(answerSum == 15){
			ifstream fp1("p.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else{
			cout << "error" << endl;
			return EXIT_FAILURE;
		}
		system("test.bat");

		int inputStorage;		//継続の可否判断入力を格納する変数
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
