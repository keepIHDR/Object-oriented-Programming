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
    string getName();           // ��ȡ����
    string getSex();            // ��ȡ�Ա�
    string getID();             // ��ȡѧ��
    int getAge();               // ��ȡ����
    double getCScore();         // ��ȡC���Գɼ�
    double getMathScore();      // ��ȡ�����ɼ�
    double getEnglishScore();   // ��ȡӢ��ɼ�
    void PrintInformation();    // ���ѧ����Ϣ
    void Modify_name(string Nname);         // �޸�ѧ������
    void Modify_sex(char Nsex);             // �޸�ѧ���Ա�
    void Modify_ID(string NID);             // �޸�ѧ��ѧ��
    void Modify_age(int Nage);              // �޸�ѧ������
    void Modify_CScore(double NCScore);       // �޸�ѧ��C���Գɼ�
    void Modify_MScore(double NMathScore);    // �޸�ѧ�������ɼ�
    void Modify_EScore(double NEnglishScore); // �޸�ѧ��Ӣ��ɼ�
};

void showStu();
void getSTU();
void ModifySTU();
void Class_Stu();