#include<iostream>
using namespace std;
//this ָ�����;
// ��;1 �������е������ظ�����
//����һ�� person��
class person
{
public:
	//����һ���вι��캯��
	person(int age)
	{
		this->age = age;//thisָ��ָ�����ָ����ǵ���������캯���Ķ���
	}
	//����һ����Ա����
	person& func(person& p)//���ص���һ��person������ã�������Ҫע�����������ص���person��ֵ����Ļ����൱�ڿ�������һ���µĺ�p2һ�����µĺ������ظ�main�����е��ú���
	{
		this->age += p.age;
		return *this;
	}
public:
	int age;
};

// ��;2 ���ĳ�������뷵�ض�������*this
void test01()
{
	person p1(15);
	person p2(10);
	p2.func(p1).func(p1).func(p1);
	cout << p2.age << endl;
}

int main()
{
	//person p1(10);//����һ������p��ͬʱ�����ŷ��ķ�ʽ���ù��캯��
	//cout << p1.age << endl;

	test01();

	system("pause");
	return 0;
}