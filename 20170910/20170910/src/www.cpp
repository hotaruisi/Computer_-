#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<iostream>

using namespace std;

#define ANSWER_NUM 4
#define RESULT_NUM 16

int answer[ANSWER_NUM];	//�e�ݖ�̉񓚒l
int answerSum;			//�񓚂̍��Z�l
bool sessionFlag = true;//�v���O�����̌p�������߂�t���O�ϐ�


char buff[2048];
char name[512];

char fileNameHead[RESULT_NUM] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

int main(){

	while (sessionFlag){

		ofstream fpw("output.html");

		cout << "���O����͂��Ă�������" << endl;
		cin >> name
;
		cout << "Q1:����P" << endl;
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

		fpw << "<h2>" << name << "����̃^�C�v��</h2>" << endl;
		answerSum = answer[0] + answer[1] + answer[2] + answer[3];
		cout << answerSum << endl;

		/*�t�@�C���o�͕�*/
		if (answerSum >= 0 && answerSum < RESULT_NUM){
			std::string fileName(1,fileNameHead[answerSum]);	//fileName�ϐ���a,b,c,...�̃A���t�@�x�b�g����
			fileName += ".txt";									//fileName�ϐ���".txt"��t����B
			ifstream fp1(fileName);								//a.txt,b.txt....�̌��ʊi�[�t�@�C���̃I�[�v��
			while(fp1 >> buff){
				fpw << buff << endl;
			}
			system("test.bat");
		}
		else{
			cout << "error" << endl;
			return EXIT_FAILURE;
		}

		/*�p���ی��蕔*/
		int inputStorage;										//�p���̉۔��f���͂��i�[����ϐ�
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
