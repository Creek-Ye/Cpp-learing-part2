#include<iostream>
using namespace std;

class integration
{
public:
	friend ostream& operator<<(ostream& cout, integration p);//��Ϊ���ò��ܸı�ָ�򣬶�����++�ĳ�Ա���ط��ص���һ����������ʱ�������һ���µĵ�ַ�������ò��øı��ַ����ô�ͻᱨ��
	//���캯����ʼ��
	integration()
	{
		m_num = 0;
	}
	//���ص��������
	
	//1.����ǰ�õ��������
	integration& operator++()//Ϊ��Ҫintegration&������return��ֵ����Ϊ�����ͬһ��������е������㣬�����ֵ�����ܣ��൱�ڹ���һ���µĿ������캯��������this�ٽ����ظ���++����
	{
		//ǰ�õ������ȶ�������е���
		++m_num;
		//�ٷ��ض�����
		return *this;		
	}
	//2.���غ��õ��������
	integration operator++(int)//���β��б����洫��һ��(int)���������أ�//������Ϊ�������������ʱ�����ܷ��ؾֲ����������ã�ֻ�ܷ��صľֲ�����temp�Ŀ�������ʱ����������һ��ֵ ��������������������ʱ�������βε���temp�Ŀ����������ó���ֵ����ʼ�������͵ı�����
	{
		//�ȴ���һ����ʱ�Ķ������洢����ǰ�Ķ���
		integration temp = *this;
		//�ڶ�m_num������е�������
		m_num++;
		//�ٷ��ش���ĵ���ǰ�Ķ���
		return temp;//�ֲ�����tempִ��������return�Ĵ����ͱ��ͷŵ��ˣ������Է��������ˡ�

	}

private:
	//����
	int m_num;
};

//��ȫ�ֺ����н������������������
ostream& operator<<(ostream & cout, integration p)
{
	cout << p.m_num;
	return cout;
}

//void test01()
//{
//	integration p1;
//	cout << p1 << endl;
//	cout << ++(++p1) << endl;
//	cout << p1 << endl;
//}
void test02()
{
	integration p2;
	cout << p2 << endl;
	cout << p2++ << endl;
	cout << p2 << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}