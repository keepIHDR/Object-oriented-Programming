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

void Student::PrintInformation() {
    cout << ">> " << name << "ͬѧ����Ϣ����: " << endl;
    if (sex == 'f') {
        cout << "   �Ա�: \t" << "��" << endl;
    }
    else {
        cout << "   �Ա�: \t" << "Ů" << endl;
    }
    cout << "   ����: \t" << age << endl;
    cout << "   ѧ��: \t" << ID << endl;
    cout << "   C���Գɼ�: \t" << CScore << endl;
    cout << "   �����ɼ�: \t" << MathScore << endl;
    cout << "   Ӣ��ɼ�: \t" << EnglishScore << endl;
}