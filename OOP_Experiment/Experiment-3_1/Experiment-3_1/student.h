#pragma once
#include <string>
using namespace std;

class Student
{
private:
	string name;            // ����
	char sex;               // �Ա�(f:�� m:Ů)
    string ID;              // ѧ��
    int age;                // ����
    double CScore;          // C���Գɼ�
    double MathScore;       // �����ɼ�
    double EnglishScore;    // Ӣ��ɼ�
public:
    void Init(string Nname, char Nsex, string NID, int Nage,
        double NCScore, double NMathScore, double NEnglishScore);
                            // ��ʼ��ѧ����Ϣ
    void PrintInformation();// ���ѧ����Ϣ
};