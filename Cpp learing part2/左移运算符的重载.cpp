#include<iostream>
using namespace std;
#include<string>
class cars
{
public:
	friend ostream& operator<<(ostream& out, cars& p);
	//void operator<<(cout)//实际调用的时候肯定为 对象object.operator<< cout// 会造成cout 在object.operator的右边，不符合我们的要求cout在左边。
	//所以不能利用成员函数对左移运算符进行构造。

	//利用构造函数赋初值
	cars(string brand, string length, string weight)
	{
		m_brand = brand;
		m_length = length;
		m_weight = weight;
	}
private:
	string m_brand;
	string m_length;
	string m_weight;
};

//在全局函数中重载一个左移运算符；
ostream& operator<<(ostream& out, cars& p)//实际会影响重载的这个运算符以及这个运算符的前变量和后变量
{
	cout << p.m_brand << "\t" << p.m_length << "\t" << p.m_weight << "\t";
	return out;
}
void test01()
{
	//实例化一个对象
	cars p("volvo","2560mm", "350kg");
	//cout << p;//没有重载过左移运算符，会报错
	cout << p << endl;//实质是调用函数ostream& operator<<(cout,p),

}




int main()
{
	test01();

	system("pause");
	return 0;
}