#include<iostream>
using namespace std;
#include<string>
class person
{
	friend void visit_01(person* p);//�����˺����ĵ�һ��ǰ��һ��friend �������е�������Ϳ��Է�����

	
public:
	person(int age, string sex_orientation) :m_age(age), m_sex_orientation(sex_orientation)//�вι��캯����������������ֵ�ó�Ա�б�ķ�ʽ��
	{

	}
	int m_age;
private:
	string m_sex_orientation;
};
void visit_01(person *p)//ȫ�ֺ���
{
	cout << "person p������Ϊ" << p->m_age<< endl;
	cout << "person p����ȡ��Ϊ" << p->m_sex_orientation << endl;//���ڱ���sex_orientation����Ȩ����private����������������ú���ʱ���ܷ������е�˽��Ȩ�޵ġ�

}
void test01()
{
	person p1(30,"������");//���ù����вι��캯��
	
	visit_01(&p1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}