#include<iostream>
using namespace std;
//声明：当我们创建一个类时：编译器会自动帮我们创建一个默认构造函数，一个拷贝构造函数，一个析构函数
//其次，默认构造，有参构造，拷贝构造的默认顺序
//当我们创建一个有参构造时，系统会默认给我们创建一个拷贝构造； 
//但当我们创建一个拷贝构造时，系统不会给我们创建默认构造和有参构造

//创建一个类
class person
{
public:
	//默认构造函数
	person()
	{
		cout << "默认构造的调用" << endl;
	}
	//有参构造
	person(int a,int height)
	{
		cout << "有参构造的调用" << endl;
		m_age = a;
		m_height = new int(height);
	}
	person(const person& p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_age = p.m_age;//如果不写拷贝构造函数，编译器默认的拷贝构造函数会写这个；
		//m_height=p.m_height
		//编译器默认的拷贝构造函数会这样写，但是这样写的话 拷贝出来的height这个地址和传进去的p.height这两个指向同一块地址，再析构的时候会重复删除这块内存地址，会报错
		m_height = new int(*p.m_height);//深拷贝，将传入的p.m_height解引用后，再利用new 再堆区新开辟一段地址出来给拷贝函数的m_height；
	}
	~person()
	{
		//析构代码将堆区new 出来的数据释放掉；
		if (m_height != 0)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "析构函数的调用" << endl;
	}
	int m_age;
	int* m_height;
};
int main()
{
	person p1(22, 160);//有参构造一个对象p1
	person p2(p1);//尽管没有写拷贝构造，系统会默认帮我们创建一个，这样就叫浅拷贝
	cout << "p1的年龄为：" << p1.m_age << "p1的身高为:" << *p1.m_height << endl;
	cout << "p2的年龄为：" << p2.m_age << "p2的身高为:" << *p2.m_height << endl;

	system("pause");
	return 0;
}
