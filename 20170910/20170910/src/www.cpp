#include<stdio.h>

#include<stdlib.h>

#include<cstring>

#include<fstream>

#include<iostream>
using namespace std;


int ans1;

int ans2;

int ans3;

int ans4;

int ans;

int co;

int body = '1';


char buff[2048];


char name[512];


int main(){

	while(body){

		ofstream fpw("output.html");

		cout << "名前を入力してください" << endl;

		cin >> name
;
		cout << "Q1:質問１" << endl;

		cout << "yes=1 no=0" << endl;

		cin >> ans1;

		cout << "Q2:" << endl;

		cout << "yes=2 no=0"<< endl;

		cin >> ans2;

		cout << "Q3:" << endl;

		cout << "yes=4 no=0" << endl;

		cin >> ans3;

		cout << "Q4:" << endl;
		cout << "yes=8 no=0" << endl;
		cin >> ans4;

		ifstream fp1("read.txt");
		while(fp1 >> buff){
			fpw << buff << endl;
		}

		fpw << "<h2>" << name << "さんのタイプは</h2>" << endl;
		ans = ans1 + ans2 + ans3 + ans4;
		cout << ans << endl;
		if(ans == 0){
			ifstream fp1("a.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 1){
			ifstream fp1("b.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 2){
			ifstream fp1("c.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 3){
			ifstream fp1("d.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 4){
			ifstream fp1("e.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 5){
			ifstream fp1("f.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 6){
			ifstream fp1("g.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 7){
			ifstream fp1("h.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 8){
			ifstream fp1("i.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 9){
			ifstream fp1("j.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 10){
			ifstream fp1("k.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 11){
			ifstream fp1("l.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 12){
			ifstream fp1("m.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 13){
			ifstream fp1("n.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 14){
			ifstream fp1("o.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else if(ans == 15){
			ifstream fp1("p.txt");
			while(fp1 >> buff){
				fpw << buff << endl;
			}
		}
		else{
			cout << "error" << endl;
			return EXIT_FAILURE;
		}
		cout << "coutinue?yes=1,no=0" << endl;

		system("test.bat");

		cin >> body;
	}
	return 0;
}
