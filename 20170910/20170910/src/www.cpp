#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<cstring>
#include<fstream>
#include<iostream>

using namespace std;

#define QUESTIONE_NUM	4
#define ANSWER_NUM		QUESTIONE_NUM
#define RESULT_NUM		16

int answer[ANSWER_NUM];	//�e�ݖ�̉񓚒l
int answerSum;			//�񓚂̍��Z�l
bool sessionFlag = true;//�v���O�����̌p�������߂�t���O�ϐ�


char buff[2048];
char name[512];

char fileNameHead[RESULT_NUM] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

int main(){
	//�{����string�z����g����������STL�R���e�i(Vector)�g�����ƂɂȂ�̂ŏȗ�
	char questionSentence[QUESTIONE_NUM][100];
	strcpy(questionSentence[0],"Q1:����1");
	strcpy(questionSentence[1],"Q2:����2");
	strcpy(questionSentence[2],"Q3:����3");
	strcpy(questionSentence[3],"Q4:����4");


	while (sessionFlag){
		
		ofstream fpw("output.html");
		cout << "���O����͂��Ă�������" << endl;
		cin >> name;

		for (int i = 0; i < QUESTIONE_NUM; i++){
			int inputAnswer;
			cout << questionSentence[i] << endl;
			cout << "yes=1 no=0" << endl;
			cin >> inputAnswer;
			if (inputAnswer == 1){ answer[i] = pow(2,i); }		//pow(2,i)->2^i  (2,0)->1 ,(2,1)->2 , (2,2)->4 , (2,3)->8
			else{ answer[i] = 0; }
		}



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
