#include<iostream>
using namespace std;
class person
{
public:
	//��Ϊ�õ���̬��������丸���е����ڶ�̬�ĺ���ͨ����û���õģ�ͨ���������е���д������ʵ�ʵ��ã����Ի�д�ɴ��麯����
	//�﷨����
	//���һ�����к���һ�����麯������ô�����ͽг����ࣻ
	//���������޷�ʵ�����ġ�
	//�̳г���������������д��̬�ĺ�������ȻҲ��һ�������࣬�޷�ʵ������
	virtual void func() = 0;
};
class person2 :public person
{
public:
	virtual void func()
	{
		cout << "func������̬�ĵ���" << endl;
	}

};


void test01()
{
	//person caiyuanhai;//������Ϊ�������޷�ʵ��������
	person* p;
	p = new person2;//����Ķ���ָ��ָ������Ķ���
	p->func();//���ø�������������Ķ����еĶ�̬����
}
int main()
{
	test01();
	system("pause");
	return 0;
}