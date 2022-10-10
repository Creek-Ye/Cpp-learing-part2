#include<iostream>
using namespace std;
class animal
{
public:
	virtual void func() = 0;
	animal()
	{
		cout << "父类animal构造函数的调用" << endl;
	}
	//释放父类指针指向的子类的对象；
	//方法1，构造虚析构函数
	//virtual~animal()//虚析构函数，必须有函数体代码
	//{
	//	cout << "父类中析构函数的调用" << endl;
	//}
	//方法2，构造纯虚析构函数
	virtual~animal() = 0;//类内声明
};
animal::~animal()//类外做函数体
{
	cout << "父类中析构函数的调用" << endl;
}

class chicken:public animal
{
	void func()
	{
		cout << "the chicken age is"<<*age<<"which is bibiing" << endl;
	}
public:
	int* age = new int(10);//在子类的堆区中开辟一个数据
	chicken()
	{
		cout << "子类chicken构造函数的调用" << endl;
	}
	~chicken()
	{
		cout << "子类chicken析构函数的调用" << endl;
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}
};

void test()
{
	animal* abs = new chicken;//用父类的一个指针指向子类的的一个new出来的对象

	abs->func();

	delete abs;//父类的指针创建在堆区了，要释放；父类的指针创建在堆区了，要释放；父类的指针创建在堆区了，要释放；
}
int main()
{
	test();
	system("pause");
	return 0;
}
