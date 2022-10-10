#include<iostream>
using namespace std;
#include<string>

class building;//声明一个building类
class goodgay 
{
public:
	goodgay(string name);//声明goodgay的一个构造函数；

	void visit();//声明一个成员visit函数；

	building*my_apartment;
	string m_name;

};
class building
{
	friend void goodgay::visit();
public:
	building();//building 构造函数的声明

	string m_sittingroom;
private:
	string m_bedroom;
};

building::building()//building类构造函数的初始化赋值
{
	m_sittingroom = "老叶的客厅";
	m_bedroom = "老叶的狗窝";
}
goodgay::goodgay(string name)//goodgay类构造函数的初始化赋值
{
	my_apartment = new building;
	this->m_name = name;
}
void goodgay::visit()
{
	cout << m_name << "is visiting" << my_apartment->m_sittingroom << endl;
	cout << m_name << "is visiting" << my_apartment->m_bedroom << endl;
}
void test01()
{
	goodgay gg("蔡渊海");//初始化一个goodgay类的对象gg，
	gg.visit();
}

int main()
{
	test01();
	system("pause");
	return 0;
}