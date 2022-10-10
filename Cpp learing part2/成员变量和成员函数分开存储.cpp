#include<iostream>
using namespace std;
class person
{

};

class people
{
public:
	int m_age = 10;//非静态成员变量占用类内的空间
	static int m_size; //类内声明
	void fun01()//非静态成员函数
	{

	}
	static void func02()//静态成员函数
	{

	}
};
int people:: m_size=20; //类外赋初值；
void test01()
{
	person p1;
	cout << "空对象的占用空间为" << sizeof(p1) << endl;
}
void test02()
{
	people p2;
	cout << "空对象的占用空间为" << sizeof(p2) << endl;
}
int main()
{
	//test01();

	test02();//除了非静态成员变量占用类内空间外， 其他的静态成员变量，静态的和非静态的函数都不占用类内空间。
	system("pause");
	return 0;


}