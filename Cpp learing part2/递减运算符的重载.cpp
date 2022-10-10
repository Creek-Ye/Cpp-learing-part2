#include<iostream>
using namespace std;

class integration
{
friend ostream& operator<<(ostream& cout, integration p);
public:

	//构造函数
	integration()
	{
		m_num = 10;//通过构造函数赋初值；
	}
	//成员函数构造递减运算符的重载
	//1.前置递减
	integration& operator--()//用对象来接受是为了在同一对象上做运算，如果返回值的话相当于拷贝出来一个新的和这个一模一样的对象来运算；
	{
		//先对里面的值进行递减；
		--m_num;
		//再返回该对象本身；
		return *this;
	}
	
	//2.后置递减
	integration operator--(int)
	{
		//创建一个临时变量记录--前对象的状态
		integration temp = *this;
		//再对值--
		m_num--;
		//返回 temp;
		return temp;//返回的是局部对象；
	}

private:
	int m_num;
};

//全局函数构造左移运算符
ostream& operator<<(ostream &cout,integration p)
{
	cout << "对象里面的数值为:" << p.m_num;
	return cout;
}


void test01()
{
	integration p;//调用无参构造，构建一个对象；
	cout << p << endl;
	cout << --(--p) << endl;
}
void test02()
{
	integration p;//调用无参构造，构建一个对象；
	cout << p << endl;
	cout << (p--)-- << endl;
	cout << p << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}