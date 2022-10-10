#include<iostream>
using namespace std;
//创建一个父类（基类）
class foundation
{
public:
	//创建成员函数
	void head()
	{
		cout << "this is common area for head" << endl;
	}
	void bottom()
	{
		cout << "this is common area for bottom" << endl;
	}
	void left()
	{
		cout << "this is common area for left" << endl;
	}
};
//创建一个子类（派生类）
class Python:public foundation
{
public:
	void unique()
	{
		cout << "this is python's unique area" << endl;
		cout<<"***********************************" << endl;
	}
};
class CPP :public foundation
{
public:
	void unique()
	{
		cout << "this is cpp's unique area" << endl;
		cout << "***********************************" << endl;
	}
};

void test01()
{
	Python py;
	py.head();
	py.bottom();
	py.left();
	py.unique();	
}
void test02()
{
	CPP cpp;
	cpp.head();
	cpp.bottom();
	cpp.left();
    cpp.unique();
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
