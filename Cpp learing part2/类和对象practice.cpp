#include<iostream>
using namespace std;
#include<string>

//创建一个学生的类
class student
{
	//访问权限
public:
	//成员属性或叫成员变量
	string m_name;
	string m_number;
	//成员函数或叫成员方法
	//1.成员赋值
	void set_val(string name,string number)
	{
		m_name = name;
		m_number = number;
	}
	void printf()
	{
		cout << "学生姓名为：" << m_name << endl;
		cout << "学生学号为：" << m_number << endl;
	}
};
int main()
{
	//创建一个学生类的对象s1
	student s1;
	s1.set_val("小红", "25");
	s1.printf();

	//创建一个学生类的对象s2;
	student s2;
	s2.m_name = "小刚";
	s2.m_number = "33";
	s2.printf();

	system("pause");
	return 0;
}
