#include<iostream>
using namespace std;
#include<string>

class building;//声明我要有一个building类
class goodgay
{
public:
	goodgay();//声明一个goodgay的构造函数

	void visit();//声明一个visit成员函数

	//成员属性
	building* m_Building;//包含一个building类的对象指针。

};


class building//创建一个building类；
{
	friend class goodgay;
public:
	building();//声明building的构造函数

	//成员属性
	string sitting_room;
private:
	string bed_room;
};


//类外给building类的构造函数赋初值
building::building()
{
	sitting_room = "温馨的客厅";
	bed_room = "老叶的狗窝";
}
goodgay::goodgay()//goodgay下的构造函数goodgay(),给指针变量m_Building new出来一个building类的对象
{	
	m_Building = new building ;//new出来一个对象Building存放在堆区，其指针返回给building；
}
void goodgay::visit()//类外创建goodgay类下面的visit成员函数
{
	cout << "你的好基友goodgay正在访问你的：" << m_Building->sitting_room << endl;
	cout << "你的好基友goodgay正在访问你的：" << m_Building->bed_room << endl;
}
int main()
{
	//创建一个goodgay类的对象
	goodgay gg;
	gg.visit();
	system("pause");
	return 0;
}