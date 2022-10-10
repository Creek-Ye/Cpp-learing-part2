#include<iostream>
using namespace std;
#include<string>
//创建一个手机类
class phone
{
public:
	//创建一个phone的构造函数
	phone(string phone_name)//有参构造
	{
		cout << "phone类的构造函数调用" << endl;
		p_phone = phone_name;//给类的属性p_phone赋值
	}
	~phone()
	{
		cout << "phone析构函数的调用" << endl;
	}
	string p_phone;
};
//创建一个person类
class person
{
public:
	//利用构造函数的初始化列表给person的属性赋初值；
	person(string input_name,string input_phonename):m_name(input_name),m_phone(input_phonename)//这块是一个隐式调用:m_phone=input_phonename
		//相当于phone m_phone=phone(input_phonename)
	{
		cout << "person构造函数的调用" << endl;
	}
	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
	//创建属性
	string m_name;
	phone m_phone;
};
int main()
{
	person p("张三","华为");
	cout << p.m_name << "的手机为" << p.m_phone.p_phone << endl;

	system("pause");
	return 0;
}