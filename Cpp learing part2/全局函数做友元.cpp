#include<iostream>
using namespace std;
#include<string>
class person
{
	friend void visit_01(person* p);//拷贝了函数的第一行前加一个friend 放在类中的最上面就可以访问了

	
public:
	person(int age, string sex_orientation) :m_age(age), m_sex_orientation(sex_orientation)//有参构造函数，并给函数赋初值用成员列表的方式；
	{

	}
	int m_age;
private:
	string m_sex_orientation;
};
void visit_01(person *p)//全局函数
{
	cout << "person p的年龄为" << p->m_age<< endl;
	cout << "person p的性取向为" << p->m_sex_orientation << endl;//由于变量sex_orientation访问权限是private，如果不做声明，该函数时不能访问类中的私有权限的。

}
void test01()
{
	person p1(30,"异性恋");//调用构造有参构造函数
	
	visit_01(&p1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}