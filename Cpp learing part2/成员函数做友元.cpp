#include<iostream>
using namespace std;
#include<string>

class building;//����һ��building��
class goodgay 
{
public:
	goodgay(string name);//����goodgay��һ�����캯����

	void visit();//����һ����Աvisit������

	building*my_apartment;
	string m_name;

};
class building
{
	friend void goodgay::visit();
public:
	building();//building ���캯��������

	string m_sittingroom;
private:
	string m_bedroom;
};

building::building()//building�๹�캯���ĳ�ʼ����ֵ
{
	m_sittingroom = "��Ҷ�Ŀ���";
	m_bedroom = "��Ҷ�Ĺ���";
}
goodgay::goodgay(string name)//goodgay�๹�캯���ĳ�ʼ����ֵ
{
	my_apartment = new building;
	this->m_name = name;
}
void goodgay::visit()
{
	cout << m_name << "is visiting" << my_apartment->m_sittingroom << endl;
	cout << m_name << "is visiting" << my_apartment->m_bedroom << endl;
}
void test01()
{
	goodgay gg("��Ԩ��");//��ʼ��һ��goodgay��Ķ���gg��
	gg.visit();
}

int main()
{
	test01();
	system("pause");
	return 0;
}