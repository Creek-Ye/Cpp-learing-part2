#include<iostream>
using namespace std;
#include<string>
//����һ���ֻ���
class phone
{
public:
	//����һ��phone�Ĺ��캯��
	phone(string phone_name)//�вι���
	{
		cout << "phone��Ĺ��캯������" << endl;
		p_phone = phone_name;//���������p_phone��ֵ
	}
	~phone()
	{
		cout << "phone���������ĵ���" << endl;
	}
	string p_phone;
};
//����һ��person��
class person
{
public:
	//���ù��캯���ĳ�ʼ���б��person�����Ը���ֵ��
	person(string input_name,string input_phonename):m_name(input_name),m_phone(input_phonename)//�����һ����ʽ����:m_phone=input_phonename
		//�൱��phone m_phone=phone(input_phonename)
	{
		cout << "person���캯���ĵ���" << endl;
	}
	~person()
	{
		cout << "person���������ĵ���" << endl;
	}
	//��������
	string m_name;
	phone m_phone;
};
int main()
{
	person p("����","��Ϊ");
	cout << p.m_name << "���ֻ�Ϊ" << p.m_phone.p_phone << endl;

	system("pause");
	return 0;
}