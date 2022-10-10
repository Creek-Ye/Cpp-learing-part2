#include<iostream>
using namespace std;
//this 指针的用途
// 用途1 区分类中的命名重复问题
//创建一个 person类
class person
{
public:
	//创建一个有参构造函数
	person(int age)
	{
		this->age = age;//this指针指向对象，指向的是调用这个构造函数的对象
	}
	//创建一个成员函数
	person& func(person& p)//返回的是一个person类的引用，但是需要注意的是如果返回的是person（值本身的话）相当于拷贝构造一个新的和p2一样的新的函数返回给main函数中调用函数
	{
		this->age += p.age;
		return *this;
	}
public:
	int age;
};

// 用途2 如果某个函数想返回对象本身用*this
void test01()
{
	person p1(15);
	person p2(10);
	p2.func(p1).func(p1).func(p1);
	cout << p2.age << endl;
}

int main()
{
	//person p1(10);//创建一个对象p，同时以括号法的方式调用构造函数
	//cout << p1.age << endl;

	test01();

	system("pause");
	return 0;
}