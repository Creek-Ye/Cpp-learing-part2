#include<iostream>
using namespace std;

class integration
{
public:
	friend ostream& operator<<(ostream& cout, integration p);//因为引用不能改变指向，而后置++的成员重载返回的是一个拷贝的临时类对象，是一个新的地址。而引用不让改变地址，那么就会报错。
	//构造函数初始化
	integration()
	{
		m_num = 0;
	}
	//重载递增运算符
	
	//1.重载前置递增运算符
	integration& operator++()//为何要integration&来接受return的值？因为是想对同一个对象进行递增运算，如果用值来接受，相当于构建一个新的拷贝构造函数来接受this再进行重复的++运算
	{
		//前置递增是先对自身进行递增
		++m_num;
		//再返回对象本身
		return *this;		
	}
	//2.重载后置递增运算符
	integration operator++(int)//在形参列表里面传入一个(int)来函数重载；//这是因为后置运算符重载时，不能返回局部变量的引用，只能返回的局部变量temp的拷贝（临时变量），是一个值 因此这里左移运算符重载时，传入形参的是temp的拷贝。不能用常数值来初始化引用型的变量。
	{
		//先创建一个临时的对象来存储递增前的对象
		integration temp = *this;
		//在对m_num本身进行递增运算
		m_num++;
		//再返回储存的递增前的对象
		return temp;//局部对象temp执行完这行return的代码后就被释放掉了，不可以返回引用了。

	}

private:
	//属性
	int m_num;
};

//在全局函数中进行左移运算符的重载
ostream& operator<<(ostream & cout, integration p)
{
	cout << p.m_num;
	return cout;
}

//void test01()
//{
//	integration p1;
//	cout << p1 << endl;
//	cout << ++(++p1) << endl;
//	cout << p1 << endl;
//}
void test02()
{
	integration p2;
	cout << p2 << endl;
	cout << p2++ << endl;
	cout << p2 << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}