#include<iostream>
using namespace std;
class person
{
public:
	//��Ա����
	//ÿһ����Ա�������涼�Զ�������һ��thisָ��
	//this ָ��ı�����һ��ָ�볣�������дȫӦ���������� person*const this�����޶�ָ���ָ������ı�
	void show_person()//һ��ĳ�Ա����
	{
		m_age = 200;//һ��ĳ�Ա�������ǿ����޸ĳ�Ա���Ե�
	}

	void show_people()const//�ڳ�Ա���������const���൱���޶����е�this ָ�����ˣ�const person*const this��ָ��ָ��Ķ���Ҳ�����޸���
	{
		//this->m_age = 150;//��Ա���������ǲ������ں����ڶԳ�Ա�������¸�ֵ��
		this->a = 30;//�ڳ�Ա���������ڲ����Ե���mutable�ĳ�Ա����
	}
	//��Ա���ԣ�
public:
	int m_age = 100;
	mutable int a = 20;
};
void test01()
{
	person p1;
	const person p2;//��������
	//��������ֻ�ܵ��ó�����Ա���������ܵ�����ͨ�ĳ�Ա����
	p2.show_people();//����������ó�Ա��������
	//p2.show_person();//����������ó�Ա�ǳ��������ᱨ��

}
