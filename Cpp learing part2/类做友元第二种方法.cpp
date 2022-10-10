#include<iostream>
using namespace std;
#include<string>
class building
{
	friend class goodfriend;
	building()//创建构造函数；
	{
		//成员属性赋初值；
		sitting_room = "老叶的客厅";
		bed_room = "老叶的卧室";
	}
	
public:
	//类的属性
	string sitting_room;
private:
	string bed_room;
};
class goodfriend
{
public:
	void visit()//创建成员函数；
	{
		cout << "您的好朋友" << m_friend_name << "正在访问：" << apartment.sitting_room << endl;
		cout << "您的好朋友" << m_friend_name << "正在访问：" << apartment.bed_room << endl;

	}
public:
	goodfriend(string name)//创建构造函数；
	{
		//赋初值
		apartment = *new(building);
		m_friend_name = name;
	}
	//类的属性
	building apartment;
	string m_friend_name;
};
int main()
{
	goodfriend gg("蔡渊海");
	gg.visit();

	system("pause");
	return 0;
}