#include<iostream>
using namespace std;
class person
{
public:
	void show_class_name()
	{
		cout << "this is a person class" << endl;
	}
	void visit_mum()
	{
		if (this == NULL)//��ߴ���ļ����ԣ��������Ķ���ָ��Ϊ�գ���ֱ��return�������������������������ԣ���Ϊ�ն�������Ϊ�գ����Ͳ�Ӧ�������ԡ�
		{
			return;
		}
		cout << "this mumber' name is" << this->m_age << endl;
	}
	int m_age;
};

void test01()
{
	//����һ��person���ָ��
	person* p1 = NULL;//��ָ��
	p1->show_class_name();
	p1->visit_mum();

}
int main()
{
	test01();
	system("pause");
	return 0;
}