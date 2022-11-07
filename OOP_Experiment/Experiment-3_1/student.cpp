#include "student.h"
#include <iostream>

using namespace std;

void Student::Init(string Nname, char Nsex, string NID, int Nage, double NCScore, double NMathScore, double NEnglishScore) {
	name = Nname;
	sex = Nsex;
	ID = NID;
	age = Nage;
	CScore = NCScore;
	MathScore = NMathScore;
	EnglishScore = NEnglishScore;
}

string Student::getName() {
    return name;
}

string Student::getSex() {
    if (sex == 'f') {
        return "��";
    }
    else {
        return "Ů";
    }
}

string Student::getID() {
    return ID;
}

int Student::getAge() {
    return age;
}

double Student::getCScore() {
    return CScore;
}

double Student::getMathScore() {
    return MathScore;
}

double Student::getEnglishScore() {
    return EnglishScore;
}

void Student::PrintInformation() {
    cout << ">> " << getName() << "ͬѧ����Ϣ����: " << endl;
    cout << "   �Ա�: \t" << getSex() << endl;
    cout << "   ����: \t" << getAge() << endl;
    cout << "   ѧ��: \t" << getID() << endl;
    cout << "   C���Գɼ�: \t" << getCScore() << endl;
    cout << "   �����ɼ�: \t" << getMathScore() << endl;
    cout << "   Ӣ��ɼ�: \t" << getEnglishScore() << endl;
}

void Student::Modify_name(string Nname) {
    name = Nname;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_sex(char Nsex) {
    sex = Nsex;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_ID(string NID) {
    ID = NID;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_age(int Nage) {
    age = Nage;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_CScore(double NCScore) {
    CScore = NCScore;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_MScore(double NMathScore) {
    MathScore = NMathScore;
    cout << "�޸ĳɹ�!" << endl;
}

void Student::Modify_EScore(double NEnglishScore) {
    EnglishScore = NEnglishScore;
    cout << "�޸ĳɹ�!" << endl;
}

Student s;

void showStu() {
    cout << "------------------------------------" << endl;
    cout << "--         ѧ����Ϣ��             --" << endl;
    cout << "------------------------------------" << endl;
    cout << "--       1.��ȡѧ����Ϣ           --" << endl;
    cout << "--       2.�޸�ѧ����Ϣ           --" << endl;
    cout << "--       3.���ѧ����Ϣ           --" << endl;
	cout << "--       0.�˳�ѧ����             --" << endl;
	cout << "------------------------------------" << endl;
    cout << "��ѡ����Ҫ���Ե�ѡ��: ";
}


void getSTU() {
	cout << "------------------------------------" << endl;
	cout << "--        ��ȡѧ����Ϣ            --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.�鿴ѧ������           --" << endl;
	cout << "--       2.�鿴ѧ���Ա�           --" << endl;
	cout << "--       3.�鿴ѧ������           --" << endl;
	cout << "--       4.�鿴ѧ��ѧ��           --" << endl;
	cout << "--       5.�鿴ѧ��C���Գɼ�      --" << endl;
	cout << "--       6.�鿴ѧ�������ɼ�       --" << endl;
	cout << "--       7.�鿴ѧ��Ӣ��ɼ�       --" << endl;
	cout << "------------------------------------" << endl;
	cout << "��ѡ����Ҫ�鿴��ѧ����Ϣ: ";
}

void ModifySTU() {
	cout << "------------------------------------" << endl;
	cout << "--        �޸�ѧ����Ϣ            --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.�޸�ѧ������           --" << endl;
	cout << "--       2.�޸�ѧ���Ա�           --" << endl;
	cout << "--       3.�޸�ѧ������           --" << endl;
	cout << "--       4.�޸�ѧ��ѧ��           --" << endl;
	cout << "--       5.�޸�ѧ��C���Գɼ�      --" << endl;
	cout << "--       6.�޸�ѧ�������ɼ�       --" << endl;
	cout << "--       7.�޸�ѧ��Ӣ��ɼ�       --" << endl;
	cout << "------------------------------------" << endl;
	cout << "��ѡ����Ҫ�޸ĵ�ѧ����Ϣ: ";
}

void Class_Stu() {
	int temp1 = 0;
	int temp2 = 0;
	int select = 0;
	string name;
	char sex = 0;
	string ID;
	int age = 0;
	double score = 0.0;
	s.Init("Zehao", 'f', "202111000212", 19, 99, 100, 98);
	system("cls");
	cout << "��ʼ��ѧ����Ϣ�ɹ�!" << endl;
	system("pause");
	while (1) {
		system("cls");
		showStu();
		cin >> select;
		switch (select)
		{
		case 1:
			system("cls");
			getSTU();
			cin >> temp1;
			switch (temp1)
			{
			case 1:
				cout << "ѧ��������Ϊ: " << s.getName() << endl;
				break;
			case 2:
				cout << "ѧ�����Ա�Ϊ: " << s.getSex() << endl;
				break;
			case 3:
				cout << "ѧ��������Ϊ: " << s.getAge() << endl;
				break;
			case 4:
				cout << "ѧ����ѧ��Ϊ: " << s.getID() << endl;
				break;
			case 5:
				cout << "ѧ����C���Գɼ�Ϊ: " << s.getCScore() << endl;
				break;
			case 6:
				cout << "ѧ���ĸ����ɼ�Ϊ: " << s.getMathScore() << endl;
				break;
			case 7:
				cout << "ѧ����Ӣ��ɼ�Ϊ: " << s.getEnglishScore() << endl;
				break;
			default:
				cout << "�����ѡ�����!" << endl;
				break;
			}
			break;
		case 2:
			system("cls");
			ModifySTU();
			cin >> temp2;
			switch (temp2)
			{
			case 1:
				cout << "ѧ������������Ϊ: ";
				cin >> name;
				s.Modify_name(name);
				break;
			case 2:
				cout << "ѧ�����Ա����Ϊ(f:�� m:Ů): ";
				cin >> sex;
				s.Modify_sex(sex);
				break;
			case 3:
				cout << "ѧ�����������Ϊ: ";
				cin >> age;
				s.Modify_age(age);
				break;
			case 4:
				cout << "ѧ����ѧ�Ÿ���Ϊ: ";
				cin >> ID;
				s.Modify_ID(ID);
				break;
			case 5:
				cout << "ѧ����C���Գɼ�����Ϊ: ";
				cin >> score;
				s.Modify_CScore(score);
				break;
			case 6:
				cout << "ѧ���ĸ����ɼ�����Ϊ: ";
				cin >> score;
				s.Modify_MScore(score);
				break;
			case 7:
				cout << "ѧ����Ӣ��ɼ�����Ϊ: ";
				cin >> score;
				s.Modify_EScore(score);
				break;
			default:
				cout << "�����ѡ�����!" << endl;
				break;
			}
			break;
		case 3:
			s.PrintInformation();
			break;
		case 0:
			return;
		default:
			cout << "����ѡ�����!" << endl;
			break;
		}
		system("pause");
	}
}