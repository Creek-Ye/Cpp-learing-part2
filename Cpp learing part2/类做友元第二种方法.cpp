#include<iostream>
using namespace std;
#include<string>
class building
{
	friend class goodfriend;
	building()//�������캯����
	{
		//��Ա���Ը���ֵ��
		sitting_room = "��Ҷ�Ŀ���";
		bed_room = "��Ҷ������";
	}
	
public:
	//�������
	string sitting_room;
private:
	string bed_room;
};
class goodfriend
{
public:
	void visit()//������Ա������
	{
		cout << "���ĺ�����" << m_friend_name << "���ڷ��ʣ�" << apartment.sitting_room << endl;
		cout << "���ĺ�����" << m_friend_name << "���ڷ��ʣ�" << apartment.bed_room << endl;

	}
public:
	goodfriend(string name)//�������캯����
	{
		//����ֵ
		apartment = *new(building);
		m_friend_name = name;
	}
	//�������
	building apartment;
	string m_friend_name;
};
int main()
{
	goodfriend gg("��Ԩ��");
	gg.visit();

	system("pause");
	return 0;
}