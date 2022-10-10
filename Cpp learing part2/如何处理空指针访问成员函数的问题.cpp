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
		if (this == NULL)//提高代码的兼容性，如果传入的对象指针为空，就直接return掉，不会继续访问其下面的属性，因为空对象下面为空，本就不应该有属性。
		{
			return;
		}
		cout << "this mumber' name is" << this->m_age << endl;
	}
	int m_age;
};

void test01()
{
	//创建一个person类的指针
	person* p1 = NULL;//空指针
	p1->show_class_name();
	p1->visit_mum();

}
int main()
{
	test01();
	system("pause");
	return 0;
}