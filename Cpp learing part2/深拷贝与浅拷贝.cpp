#include<iostream>
using namespace std;
//�����������Ǵ���һ����ʱ�����������Զ������Ǵ���һ��Ĭ�Ϲ��캯����һ���������캯����һ����������
//��Σ�Ĭ�Ϲ��죬�вι��죬���������Ĭ��˳��
//�����Ǵ���һ���вι���ʱ��ϵͳ��Ĭ�ϸ����Ǵ���һ���������죻 
//�������Ǵ���һ����������ʱ��ϵͳ��������Ǵ���Ĭ�Ϲ�����вι���

//����һ����
class person
{
public:
	//Ĭ�Ϲ��캯��
	person()
	{
		cout << "Ĭ�Ϲ���ĵ���" << endl;
	}
	//�вι���
	person(int a,int height)
	{
		cout << "�вι���ĵ���" << endl;
		m_age = a;
		m_height = new int(height);
	}
	person(const person& p)
	{
		cout << "�������캯���ĵ���" << endl;
		m_age = p.m_age;//�����д�������캯����������Ĭ�ϵĿ������캯����д�����
		//m_height=p.m_height
		//������Ĭ�ϵĿ������캯��������д����������д�Ļ� ����������height�����ַ�ʹ���ȥ��p.height������ָ��ͬһ���ַ����������ʱ����ظ�ɾ������ڴ��ַ���ᱨ��
		m_height = new int(*p.m_height);//������������p.m_height�����ú�������new �ٶ����¿���һ�ε�ַ����������������m_height��
	}
	~person()
	{
		//�������뽫����new �����������ͷŵ���
		if (m_height != 0)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "���������ĵ���" << endl;
	}
	int m_age;
	int* m_height;
};
int main()
{
	person p1(22, 160);//�вι���һ������p1
	person p2(p1);//����û��д�������죬ϵͳ��Ĭ�ϰ����Ǵ���һ���������ͽ�ǳ����
	cout << "p1������Ϊ��" << p1.m_age << "p1�����Ϊ:" << *p1.m_height << endl;
	cout << "p2������Ϊ��" << p2.m_age << "p2�����Ϊ:" << *p2.m_height << endl;

	system("pause");
	return 0;
}
